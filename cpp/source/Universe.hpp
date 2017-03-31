#ifndef PPS_UNIVERSE_H
#define PPS_UNIVERSE_H
#import "Planet.hpp"
#import <SFML/Graphics.hpp>
#import <vector>

namespace pps {

class Universe {
private:
  std::vector<Planet> planets;
  float g;         // gravitational constant
  bool drawTrails; // should the tils for the univers be calculated
  sf::Vector2f universeExtents[2];        // min_x,min_y; max_x,max_y
  sf::Vector2f maxUniverseExtentsSeen[2]; // verry discriptive name
  sf::Vector2f universAreaToDraw[2]; // the area of the univers we want to draw

  void updateViewPort(int mode, sf::Vector2u windowSize);

public:
  Universe(void);
  int getPlanetCount(void);
  void Update(sf::Time dt, int mode,
              sf::Vector2u windowSize); // updates all planet locations

  void draw(sf::RenderWindow &window);
  // list depleated

  sf::Vector2f *getUniverseExtents();
  sf::Vector2f *getMaxUniverseExtentsSeen();

  float getG(); // for seting Gravitational constant
  void setG(float sg);
  void setTrailLength(size_t length); // the number of points that should be
  // drawen behind each planet
  void setTrailFrameDelay(size_t delay);
  void setDrawTrails(bool dt); //
  void addPlanet(Planet p);
  void delPlanet(size_t index); // deletes a planet from the planets at index.
};
}
#endif /* end of include guard: PPS_UNIVERSE_H */
