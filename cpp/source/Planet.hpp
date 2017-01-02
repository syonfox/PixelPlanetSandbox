#ifndef PPS_PLANET_H
#define PPS_PLANET_H

#include <SFML/Graphics.hpp>
namespace pps {
class Planet {

private:
  sf::CircleShape shape; // the sprite
  sf::Color color;       // the panat base color
  // sf::VertexArray va;//for complex planets
public:
  float r;        // radius
  float m;        // mass
  sf::Vector2f p; // position (center of mass)
  sf::Vector2f v; // velocity
  sf::Vector2f a; // acceleration

  Planet(float ir, float im, sf::Vector2f ip, sf::Vector2f iv, sf::Vector2f ia,
         sf::Color icolor);

  // sf::CircleShape
  // generateCircleShape(); // generates the sprite based on the size and color
  sf::CircleShape getCircleShape(); // retuens somting that can be drawen and
                                    // represents th planet
};
}

/*computer pls make univers sim using SFML
make it run on a toster and fast
ps pls no bugs
thanks humman
*/

#endif /* end of include guard: PPS_PLANET_H */
