#include "imgui-SFML.h"
#include "imgui.h"
//#include "imgui_demo.h"
#include "PixelPlanetSandbox.hpp"
#include "Planet.hpp"
#include "Universe.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <stdint.h>
#include <stdlib.h>

pps::PixelPlanetSandbox::PixelPlanetSandbox(sf::RenderWindow &window) {
  this->window = window;

  ImGui::SFML::Init(window);
}
pps::PixelPlanetSandbox::~PixelPlanetSandbox() { delete window; }
