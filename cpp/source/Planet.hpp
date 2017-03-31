#ifndef PPS_PLANET_H
#define PPS_PLANET_H

#include <SFML/Graphics.hpp>
namespace pps {

class Planet {

private:
  sf::CircleShape shape; // the sprite
  sf::Color color;       // the panat base color
  // sf::VertexArray va;//for complex planets
  float radius;              // radius
  float mass;                // mass
  sf::Vector2f position;     // position (center of mass)
  sf::Vector2f velocity;     // velocity
  sf::Vector2f acceleration; // acceleration

  bool drawTrail;
  sf::VertexArray trailLine; // Used as a circulaer array updating the last line
  size_t trailLength;        // number of trail segments

  sf::Vector2f *positionHistory;

  size_t historyLength;
  size_t historyFront; // index of the oldes trail segment

  unsigned frameDelay; // nomber of frames to skip befor adding a historyPoint
  unsigned frameCount; // counter for the number of frames

  // float r; // idk i think tikness
  sf::Color trailColor;

public:
  Planet(float ir, float im, sf::Vector2f ip, sf::Vector2f iv, sf::Vector2f ia,
         sf::Color icolor);
  ~Planet();

  void draw(sf::RenderWindow &window);

  void updateSprites(sf::Vector2f orgin, float scale);

  float getRadius();
  float getMass();
  sf::Vector2f getPosition();
  sf::Vector2f getVelocity();
  sf::Vector2f getAcceleration();

  void setPosition(sf::Vector2f p);
  void setVelocity(sf::Vector2f v);
  void setAcceleration(sf::Vector2f a);

  void update(sf::Time dt);

  ////TRAIL////
  bool isTrailEnabled();

  void enableTrail();
  void disableTrail();

  size_t getTrailLength();
  void setTrailLength(unsigned length);

  size_t getHistoryLength();
  void setHistoryLength(size_t length);

  unsigned getFrameDelay();
  void setFrameDelay(unsigned delay);

  // sf::CircleShape
  // generateCircleShape(); // generates the sprite based on the size and color
  // retuens somting that can be drawen and
  // represents the planet, based on the scale you want and where the
  // window(0,0) is in the univers
  sf::CircleShape getCircleShape(sf::Vector2f orgin, float scale);
};
}

/*computer pls make univers sim using SFML
make it run on a toster and fast
ps pls no bugs
thanks humman
*/

#endif /* end of include guard: PPS_PLANET_H */
