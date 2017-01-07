#include "Planet.hpp"
#include <SFML/Graphics.hpp>

pps::Planet::Planet(float ir, float im, sf::Vector2f ip, sf::Vector2f iv,
                    sf::Vector2f ia, sf::Color icolor) {
  r = ir;
  m = im;
  p = ip;
  v = iv;
  a = ia;
  color = icolor;
  shape = sf::CircleShape(r);
  shape.setFillColor(color);
  shape.setOrigin(r, r); // r= radius
  shape.setPosition(p);
}

// sf::CircleShape pps::Planet::generateCircleShape() {
// if complex generation needed
//}
sf::CircleShape pps::Planet::getCircleShape(sf::Vector2f orgin, float scale) {

  shape.setPosition((p * scale) + orgin); // orgin is the univers position that
                                          // is maped to window position (0, 0)
                                          // withscale being a constant the
                                          // converts world units to pixels
  shape.setScale(scale, scale);

  return shape;
}
