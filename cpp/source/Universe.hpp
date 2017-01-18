#ifndef PPS_UNIVERSE_H
#define PPS_UNIVERSE_H
#import "Planet.hpp"
#import <SFML/Graphics.hpp>
#import <vector>

namespace pps {

// not guna preoptims but this chould be done in a normal array but
struct Trails {
  std::vector<sf::CircleShape> shapes;
  // for univers positions //for changing scalse
  std::vector<sf::Vector2f> positions;
  uint length; // length of each trail
  uint size;   // lingth of the array
  uint ptr;
  uint frameDelay;
  uint frameCount;
  float r;
  sf::Color color;
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
  sf::CircleShape getTailsShape();

public:
  Universe(void);
  int getPlanetCount(void);
  void Update(sf::Time dt, int mode,
              sf::Vector2u windowSize); // updates all planet locations
  // list depleated
  // returns a list of all visable planets
  std::vector<sf::CircleShape> getVisiblePlanets();
  // returns a list of all trailpoints needed
  std::vector<sf::CircleShape> getVisibleTrails();
  sf::Vector2f *getUniverseExtents();
  sf::Vector2f *getMaxUniverseExtentsSeen();

  float getG(); // for seting Gravitational constant
  void setG(float sg);
  void setTrailLength(uint length); // the number of points that should be
                                    // drawen behind each planet
  void setDrawTrails(bool dt);      //
  void addPlanet(Planet p);
  void delPlanet(size_t index); // deletes a planet from the planets at index.
};
}
#endif /* end of include guard: PPS_UNIVERSE_H */
