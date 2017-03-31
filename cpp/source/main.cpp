#include "imgui.h"
//#include "imgui_demo.h"
#include "Planet.hpp"
#include "Universe.hpp"
#include "imgui-SFML.h"
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
  pps::Planet p1(10, 100, sf::Vector2f(200, 200), sf::Vector2f(0, 20),
                 sf::Vector2f(0, 0), sf::Color::Red);
  pps::Planet p2(50, 100, sf::Vector2f(400, 200), sf::Vector2f(0, -20),
                 sf::Vector2f(0, 0), sf::Color::Blue);
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

    ImGui::SFML::Update(window, deltaClock.restart());
    uni.Update(deltaClock.getElapsedTime(), uniDrawMode, window.getSize());

    ImGui::Begin("God");

    ImGui::SliderFloat("Gravitational Constant", &g, 0.0f, 10.0f,
                       "ratio = %.3f");
    uni.setG(g);
    ImGui::InputInt("Univers Draw Mode", &uniDrawMode, 1);
    if (ImGui::CollapsingHeader("Add Planet Menu")) {
      ImGui::InputFloat("Radius", &apr);
      // ImGui::SameLine();
      ImGui::InputFloat("Mass", &apm);
      ImGui::InputFloat("Position X", &appx);
      // ImGui::SameLine();
      ImGui::InputFloat("Position Y", &appy);
      ImGui::InputFloat("Velocity X", &apvx);
      // ImGui::SameLine();
      ImGui::InputFloat("Velocity Y", &apvy);

      ImGui::ColorEdit3("Color", apc);
      ImGui::SameLine();
      ShowHelpMarker("Click on the colored square to change edit "
                     "mode.\nCTRL+click on individual component to input "
                     "value.\n");
      if (ImGui::Button("Add Planet")) {
        didsomting++;
        uni.addPlanet(pps::Planet(apr, apm, sf::Vector2f(appx, appy),
                                  sf::Vector2f(apvx, apvy), sf::Vector2f(0, 0),
                                  sf::Color((uint8_t)(apc[0] * 255),
                                            (uint8_t)(apc[1] * 255),
                                            (uint8_t)(apc[2] * 255), 255)));
      }
    }
    if (ImGui::CollapsingHeader("Edit Trails Menu")) {
      ImGui::InputInt("Trails Lenth", &tl);
      // ImGui::SameLine();
      ImGui::InputInt("Frame Delay", &fd);
      ImGui::Checkbox("Trailes Enabled", &dt);

      if (ImGui::Button("Update Trails")) {
        if (tl < 0)
          tl = 0;
        if (fd < 0)
          fd = 0;
        uni.setTrailLength((size_t)tl);
        uni.setTrailFrameDelay((size_t)fd);
        uni.setDrawTrails(dt);
      }
    }

    window.clear();
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

    // if(Universe.isDrawTrails())
    //  std::vector<sf::VertexArray> trailShapes = uni.getVisibleTrails();
    //  for (size_t i = 0; i < trailShapes.size(); i++) {
    //      window.draw(trailShapes[i]);//
    //    }

    //    std::vector<sf::CircleShape> planetsShapes = uni.getVisiblePlanets();
    // for (size_t i = 0; i < planetsShapes.size(); i++) {
    //      window.draw(planetsShapes[i]);
    //    }

    uni.draw(window);

    ImGui::Render();
    window.draw(txtFps);
    window.display();
  }

  ImGui::SFML::Shutdown();
}
