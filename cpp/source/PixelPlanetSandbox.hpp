#include <SFML/Graphics.hpp>

#ifndef PIXEL_PLANET_SANDBOX_HPP
#define PIXEL_PLANET_SANDBOX_HPP

namespace pps {

class PixelPlanetSandbox {
private:
  // sfml vars
  sf::RenderWindow window;
  sf::VideoMode defaultVideoMode;
  void initUniverse();
  void startGameLoop();

public:
  PixelPlanetSandbox(sf::RenderWindow &window);
  ~PixelPlanetSandbox();
};
}
#endif /* end of include guard: PIXEL_PLANET_SANDBOX_HPP */
