#ifndef PPS_UNIVERSE_H
#define PPS_UNIVERSE_H
#include "Planet.hpp"
#include <SFML/Graphics.hpp>
#include <set>
#include <vector>

namespace pps {

class Universe {

  class ImGuiData { // glorified struct
  public:
    //  bool editOnChange;

    const static size_t addPlanetNameBufLength = 64;
    char addPlanetNameBuf[addPlanetNameBufLength];

    float addPlanetMass;
    float addPlanetRadius;
    float addPlanetPosition[2];
    float addPlanetVelocity[2];
    // int trailLength;
    // int historyLength;
    // bool trailEnabled;
    // int frameDelay;

    float addPlanetColor[3];
    // float trailColor[3];
  };

private:
  std::vector<Planet> planets;

  std::vector<size_t> colisionList;

  float g;         // gravitational constant
  bool drawTrails; // should the tils for the univers be calculated
  sf::Vector2f universeExtents[2];        // min_x,min_y; max_x,max_y
  sf::Vector2f maxUniverseExtentsSeen[2]; // verry discriptive name
  sf::Vector2f universAreaToDraw[2]; // the area of the univers we want to draw

  void queueColision(size_t i, size_t j);
  void handleColisons();
  void updateViewPort(int mode, sf::Vector2u windowSize);

  ImGuiData imguiData;

public:
  Universe(void);
  int getPlanetCount(void);
  // const std::vector<Planet> *const getPlanetsList();
  void Update(sf::Time dt, int mode,
              sf::Vector2u windowSize); // updates all planet locations

  void draw(sf::RenderWindow &window);
  // list depleated

  sf::Vector2f *getUniverseExtents();
  sf::Vector2f *getMaxUniverseExtentsSeen();

  float getG(); // for seting Gravitational constant
  void setG(float sg);
  void setTrailLength(int length); // the number of points that should be
  // drawen behind each planet
  void setTrailFrameDelay(int delay);
  void setDrawTrails(bool dt); //
  void addPlanet(Planet p);
  void delPlanet(size_t index); // deletes a planet from the planets at index.

  void imguiPlanetMenu();

  void imguiPlanetsList();
};
}
#endif /* end of include guard: PPS_UNIVERSE_H */
