#ifndef PPS_UNIVERSE_H
#define PPS_UNIVERSE_H
#import "Planet.hpp"
#import <SFML/Graphics.hpp>
#import <vector>

namespace pps {

struct SpritePoint {
  sf::CircleShape shape;
  sf::Vector2f p;
};
struct Trails {
  SpritePoint *trailData;
  uint len;
  uint front;
};

class Universe {
private:
  std::vector<Planet> planets;
  std::vector<sf::CircleShape> vps; // visibal planet shapes?
  float g;                          // gravitational constant
  bool drawTrails; // should the tils for the univers be calculated
  Trails trails;
  sf::Vector2f universeExtents[2];        // min_x,min_y; max_x,max_y
  sf::Vector2f maxUniverseExtentsSeen[2]; // verry discriptive name
  void updateVisiblePlanetShapes(int mode, sf::Vector2u windowSize);

public:
  Universe(void);
  int getPlanetCount(void);
  void Update(sf::Time dt, int mode,
              sf::Vector2u windowSize); // updates all planet locations
  // Planet *getNextVisiblePlanet(); // gets a visible planet //returns Null if
  // list depleated
  std::vector<sf::CircleShape>
  getVisiblePlanets(); // returns a list of all visable planets
  sf::Vector2f *getUniverseExtents();
  sf::Vector2f *getMaxUniverseExtentsSeen();
  float getG();
  void setG(float sg);
  void setTrailLength(uint length);
  void setDrawTrails(bool dt);
  void addPlanet(Planet p);
  void delPlanet(size_t index); // deletes a planet from the planets at index.
};
}
#endif /* end of include guard: PPS_UNIVERSE_H */
