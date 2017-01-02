#ifndef PPS_UNIVERSE_H
#define PPS_UNIVERSE_H
#import "Planet.hpp"
#import <SFML/Graphics.hpp>
#import <vector>
namespace pps {

class Universe {
private:
  std::vector<Planet> planets;
  std::vector<sf::CircleShape> vps; // visibal planet shapes?
  float g;                          // gravitational constant
  sf::Vector2f universeExtents[2];  // min_x,min_y; max_x,max_y
public:
  Universe(void);
  int getPlanetCount(void);
  void Update(sf::Time dt); // updates all planet locations
  // Planet *getNextVisiblePlanet(); // gets a visible planet //returns Null if
  // list depleated
  std::vector<sf::CircleShape>
  getVisiblePlanets(); // returns a list of all visable planets
  sf::Vector2f *getUniverseExtents();
  float getG();
  void setG(float sg);

  void addPlanet(Planet p);
  void delPlanet(size_t index); // deletes a planet from the planets at index.
};
}
#endif /* end of include guard: PPS_UNIVERSE_H */
