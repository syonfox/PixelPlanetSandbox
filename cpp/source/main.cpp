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
  // pps::Planet::font = sf::Font();
  // if (!pps::Planet::font.loadFromFile("res/Capture_it.ttf")) {
  //  return 22;
  //}

  // pps::Planet::SetFont(fontCapture);

  sf::Text txtFps;
  txtFps.setFont(fontCapture);
  int didsomting = 0;

  // for use in imgui
  bool showMenuGod = false;
  bool showMenuPlanet = false;
  float g = 10;

  // trails vars
  int tl = 100;
  int fd = 100;
  bool dt = true;
  int uniDrawMode = 0;

  // float apc[3] = {1.0f, 0.0f, 0.2f};

  pps::Universe uni;
  pps::Planet p1("Foo", 10, 100, sf::Vector2f(200, 200), sf::Vector2f(0, 100),
                 sf::Color::Red);
  pps::Planet p2("Bar", 50, 500, sf::Vector2f(400, 200), sf::Vector2f(0, -20),
                 sf::Color::Blue);
  uni.addPlanet(p1);
  uni.addPlanet(p2);

  uni.setDrawTrails(true);

  // timing
  printf("dsfs\n");

  uint tick = 0;
  sf::Time tickTime =
      sf::seconds(0.01f);    // the amount of time to simulate every tick
  int ticksPerSecond = 1200; // number of ticks to simulate evry second
  sf::Time secondsPerTick = sf::seconds(1.0f / ticksPerSecond);

  int framesPerSecond = 120;
  int ticksPerFrame =
      ticksPerSecond /
      framesPerSecond; // todo make it adgust fps for valid ratio
  printf("asdasd\n");
  sf::Time secondsPerFrame = sf::seconds(1.0f / framesPerSecond);
  /*
  clock.resart()
  tick++;
  uni.update()
  if(tick% ticksPerFrame = 0)
    render();

  if(clock.time() < secondsPerTick )
    sleep(secondsPerTick -clock.time());
  */
  sf::Clock deltaClock;

  /*
  Main loop
   */
  printf("ghashjfdksf\n");
  while (window.isOpen()) {
    deltaClock.restart();
    tick++;

    ////Update univers////
    uni.Update(tickTime, uniDrawMode, window.getSize());

    // if we are rendering do gui and draw
    if (tick % ticksPerFrame == 0) {
      // handleEvents( ) //TODO: break out event handler
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

      // update ImGui
      ImGui::SFML::Update(window, secondsPerFrame);

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
                    1000.0f / ImGui::GetIO().Framerate,
                    ImGui::GetIO().Framerate);
        ImGui::Text("Planet Count: %d", uni.getPlanetCount());
        ImGui::Text("Didsomting: %d", didsomting);
        sf::Vector2f *tempUE = uni.getUniverseExtents();
        ImGui::Text("Universe Extents: (%f,%f) (%f,%f)", tempUE[0].x,
                    tempUE[0].y, tempUE[1].x, tempUE[1].y);

        tempUE = uni.getMaxUniverseExtentsSeen();
        ImGui::Text("Universe Extents: (%f,%f) (%f,%f)", tempUE[0].x,
                    tempUE[0].y, tempUE[1].x, tempUE[1].y);
        ImGui::Text("Has Focus %d, imguihas focus %d", hasFocus,
                    ImGui::IsMouseHoveringAnyWindow());
        ImGui::End();
        // Checked item
      }

      if (showMenuPlanet) {
        ImGui::Begin("Planet Menu");

        uni.imguiPlanetMenu();
        uni.imguiPlanetsList();

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

      //// CLEAR ////
      window.clear();

      //// DRAW /////
      uni.draw(window); // draw Universe

      ImGui::Render(); // draw ImGui

      // window.draw(txtFps);

      //// DISPLAY ////
      window.display();
    }

    sf::sleep(secondsPerTick - deltaClock.getElapsedTime());
  }

  ImGui::SFML::Shutdown();
}
