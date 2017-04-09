#ifndef PPS_PLANET_H
#define PPS_PLANET_H

#include "CircularArray.hpp"
#include <SFML/Graphics.hpp>
#include <string>

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

  bool _isTrailEnabled;

  sf::VertexArray trailLine; // Used as a circulaer array updating the last line
  int trailLength;           // number of trail segments

  pps::CircularArray positionHistory;

  unsigned frameDelay; // nomber of frames to skip befor adding a historyPoint
  unsigned frameCount; // counter for the number of frames

  sf::Color trailColor;

public:
  Planet();
  Planet(float ir, float im, sf::Vector2f ip, sf::Vector2f iv,
         sf::Color icolor);

  Planet(const Planet &other);

  //~Planet();

  void draw(sf::RenderWindow &window);
  void drawPlanet(sf::RenderWindow &window);
  void drawTrail(sf::RenderWindow &window);

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

  int getTrailLength();
  void setTrailLength(unsigned length);

  int getHistoryLength();
  void setHistoryLength(int length);

  unsigned getFrameDelay();
  void setFrameDelay(unsigned delay);

  void imguiDebugInfo() const;
  void imguiDebugMenu() const;

  //  const char *getDebugString() const;
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
