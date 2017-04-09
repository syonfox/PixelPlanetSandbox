#include "imgui-SFML.h"
#include "imgui.h"
//#include "imgui_demo.h"
#include "Planet.hpp"
#include "Universe.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <stdint.h>
#include <stdlib.h>
// void myFunc() { ImGui::Button("My Func"); }
// for help things.
static void ShowHelpMarker(const char *desc) {
  ImGui::TextDisabled("(?)");
  if (ImGui::IsItemHovered()) {
    ImGui::BeginTooltip();
    ImGui::PushTextWrapPos(450.0f);
    ImGui::TextUnformatted(desc);
    ImGui::PopTextWrapPos();
    ImGui::EndTooltip();
  }
}

int main() {
  // int buttonPressed = 0;
  sf::RenderWindow window(sf::VideoMode(1300, 700), "Pixel Planet Simulator");

  window.setFramerateLimit(500);
  ImGui::SFML::Init(window);

  static bool hasFocus = true;

  sf::Font fontCapture;
  fontCapture.loadFromFile("res/Capture_it.ttf");

  sf::Text txtFps;
  txtFps.setFont(fontCapture);
  int didsomting = 0;

  // for use in imgui
  bool showMenuGod = false;
  bool showMenuPlanet = false;
  float g = 10;
  // add planet vars;
  float apr = 10;
  float apm = 100;
  float appx = 1;
  float appy = 2;
  float apvx = 3;
  float apvy = 4;

  // trails vars
  int tl = 100;
  int fd = 100;
  bool dt = true;
  int uniDrawMode = 0;

  float apc[3] = {1.0f, 0.0f, 0.2f};

  pps::Universe uni;
  pps::Planet p1(10, 91, sf::Vector2f(200, 200), sf::Vector2f(0, 20),
                 sf::Color::Red);
  pps::Planet p2(50, 92, sf::Vector2f(400, 200), sf::Vector2f(0, -20),
                 sf::Color::Blue);
  uni.addPlanet(p1);
  uni.addPlanet(p2);

  uni.setDrawTrails(true);

  sf::Clock deltaClock;

  /*
  Main loop
   */
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      ImGui::SFML::ProcessEvent(event);

      // if the window has focuse and Imgui dose not
      if (hasFocus && !ImGui::IsMouseHoveringAnyWindow()) {
        // nonimgui event handling
      }

      switch (event.type) {
      case sf::Event::LostFocus:
        hasFocus = false;
        break;
      case sf::Event::GainedFocus:
        hasFocus = true;
        break;
      default:
        break;
      }

      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    ///// UPDATE /////
    // update ImGui
    ImGui::SFML::Update(window, deltaClock.restart());

    // update Universe
    uni.Update(deltaClock.getElapsedTime(), uniDrawMode, window.getSize());

    // char name[16];

    /////GUI LOGIC /////
    if (ImGui::BeginMainMenuBar()) {
      if (ImGui::BeginMenu("File")) {
        //  ShowExampleMenuFile();

        if (ImGui::MenuItem("does", "nothing", false, false)) {
        } // Disabled item
        ImGui::EndMenu();
      }
      if (ImGui::BeginMenu("Windows")) {
        //  ShowExampleMenuFile();

        ImGui::MenuItem("God Window", NULL, &showMenuGod);
        ImGui::MenuItem("Planet Window", NULL, &showMenuPlanet);
        ImGui::EndMenu();
      }

      if (ImGui::BeginMenu("Edit")) {
        if (ImGui::MenuItem("Undo", "CTRL+Z")) {
        }
        if (ImGui::MenuItem("Redo", "CTRL+Y", false, false)) {
        } // Disabled item
        ImGui::Separator();
        if (ImGui::MenuItem("Cut", "CTRL+X")) {
        }
        if (ImGui::MenuItem("Copy", "CTRL+C")) {
        }
        if (ImGui::MenuItem("Paste", "CTRL+V")) {
        }
        ImGui::EndMenu();
      }
      ImGui::EndMainMenuBar();
    }

    if (showMenuGod) {
      ImGui::Begin("GodOLD");

      ImGui::SliderFloat("Gravitational Constant", &g, 0.0f, 10.0f,
                         "ratio = %.3f");
      uni.setG(g);
      ImGui::InputInt("Univers Draw Mode", &uniDrawMode, 1);

      ImGui::Text("Application average %.3f ms/frame (%.1f FPS)",
                  1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
      ImGui::Text("Planet Count: %d", uni.getPlanetCount());
      ImGui::Text("Didsomting: %d", didsomting);
      sf::Vector2f *tempUE = uni.getUniverseExtents();
      ImGui::Text("Universe Extents: (%f,%f) (%f,%f)", tempUE[0].x, tempUE[0].y,
                  tempUE[1].x, tempUE[1].y);

      tempUE = uni.getMaxUniverseExtentsSeen();
      ImGui::Text("Universe Extents: (%f,%f) (%f,%f)", tempUE[0].x, tempUE[0].y,
                  tempUE[1].x, tempUE[1].y);
      ImGui::Text("Has Focus %d, imguihas focus %d", hasFocus,
                  ImGui::IsMouseHoveringAnyWindow());
      ImGui::End();
      // Checked item
    }

    if (showMenuPlanet) {
      ImGui::Begin("Planet Menu");

      if (ImGui::CollapsingHeader("Add Planet Menu")) {
        ImGui::InputFloat("Radius", &apr);
        // ImGui::SameLine();
        ImGui::InputFloat("Mass", &apm);
        ImGui::InputFloat("Position X", &appx);
        // ImGui::SameLine();
        ImGui::InputFloat("Position Y", &appy);
        ImGui::InputFloat("Velocity X", &apvx);
        ImGui::SameLine();
        ImGui::InputFloat("Velocity Y", &apvy);

        ImGui::ColorEdit3("Color", apc);
        ImGui::SameLine();
        ShowHelpMarker("Click on the colored square to change edit "
                       "mode.\nCTRL+click on individual component to input "
                       "value.\n");
        if (ImGui::Button("Add Planet")) {
          didsomting++;
          sf::Color color =
              sf::Color((uint8_t)(apc[0] * 255), (uint8_t)(apc[1] * 255),
                        (uint8_t)(apc[2] * 255), 255);

          pps::Planet tempPlanet(apr, apm, sf::Vector2f(appx, appy),
                                 sf::Vector2f(apvx, apvy), color);
          uni.addPlanet(tempPlanet);
        }
      }
      if (ImGui::CollapsingHeader("Planet List")) {

        const std::vector<pps::Planet> *const planets = uni.getPlanetsList();

        // char name[16];
        for (int i = 0; i < (*planets).size(); i++) {
          //  printf("mainAcceleratin: (%f, %f)\n",
          //   (*planets)[i].getAcceleration().x,
          // (*planets)[i].getAcceleration().y);
          (*planets)[i].imguiDebugInfo();
          (*planets)[i].imguiDebugMenu();

          // ImGui::Text(planets[i].getDebugString());
          // if (ImGui::CollapsingHeader()) {
        }
      }
      if (ImGui::CollapsingHeader("Global Planet Settings")) {
        // trails
        if (tl < 0)
          tl = 0;
        if (fd < 0)
          fd = 0;
        if (ImGui::CollapsingHeader("Trails")) {
          ImGui::InputInt("Trails Length", &tl);
          // ImGui::SameLine();
          ImGui::InputInt("Frame Delay", &fd);
          ImGui::Checkbox("Trailes Enabled", &dt);

          if (ImGui::Button("Update Trails")) {

            uni.setTrailLength(tl);
            uni.setTrailFrameDelay(fd);
            uni.setDrawTrails(dt);
          }
        }

        // apply
      }

      ImGui::Text("Planet Count: %d", uni.getPlanetCount());

      ImGui::End();
    }

    // if(Universe.isDrawTrails())
    //  std::vector<sf::VertexArray> trailShapes = uni.getVisibleTrails();
    //  for (size_t i = 0; i < trailShapes.size(); i++) {
    //      window.draw(trailShapes[i]);//
    //    }

    //    std::vector<sf::CircleShape> planetsShapes =
    //    uni.getVisiblePlanets();
    // for (size_t i = 0; i < planetsShapes.size(); i++) {
    //      window.draw(planetsShapes[i]);
    //    }
    //// CLEAR ////
    window.clear();

    //// DRAW /////
    uni.draw(window); // draw Universe

    ImGui::Render(); // draw ImGui

    // window.draw(txtFps);

    //// DISPLAY ////
    window.display();
  }

  ImGui::SFML::Shutdown();
}
