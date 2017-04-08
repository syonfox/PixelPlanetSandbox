#include "Universe.hpp"
#include "Planet.hpp"
#include "imgui-SFML.h"
#include "imgui.h"
#include <SFML/Graphics.hpp>
#include <vector>

pps::Universe::Universe() {
  planets = std::vector<pps::Planet>();
  g = 10;
  maxUniverseExtentsSeen[0] = sf::Vector2f();
  maxUniverseExtentsSeen[1] = sf::Vector2f();
  drawTrails = false;
}

void pps::Universe::draw(sf::RenderWindow &window) {
  for (unsigned i = 0; i < planets.size(); i++) {
    planets[i].drawTrail(window);
  }
  for (unsigned i = 0; i < planets.size(); i++) {
    planets[i].drawPlanet(window);
  }
}

void pps::Universe::addPlanet(pps::Planet p) { planets.push_back(p); }

void pps::Universe::delPlanet(size_t index) {
  if (index < planets.size()) {
    planets.erase(planets.begin() + index);
  }
}

const std::vector<pps::Planet> &pps::Universe::getPlanetsList() {
  return planets;
}

void pps::Universe::setTrailLength(int length) {
  if (length >= 0) {
    for (int i = 0; i < planets.size(); i++) {
      planets[i].setTrailLength(length);
    }
  }
}

void pps::Universe::setTrailFrameDelay(int delay) {
  if (delay >= 0) {
    for (int i = 0; i < planets.size(); i++) {
      planets[i].setFrameDelay(delay);
    }
  }
}

float pps::Universe::getG() { return g; }
void pps::Universe::setG(float sg) { g = sg; }
int pps::Universe::getPlanetCount() { return planets.size(); }
sf::Vector2f *pps::Universe::getUniverseExtents() { return universeExtents; }
sf::Vector2f *pps::Universe::getMaxUniverseExtentsSeen() {
  return maxUniverseExtentsSeen;
}

void pps::Universe::Update(sf::Time dt, int mode, sf::Vector2u windowSize) {

  // loops vars
  size_t i = 0;
  size_t j = 0;
  // vps = {};

  size_t numPlanets = planets.size();

  sf::Vector2f *accelerations = new sf::Vector2f[numPlanets];
  // zero out the acceleration (2n)

  for (i = 0; i < numPlanets; i++) {
    accelerations[i] = sf::Vector2f(0.0, 0.0);
  }

  // double for for each pair of planets (c*n^2)
  // TODO: Optimize
  for (i = 0; i < numPlanets; i++) {
    for (j = i + 1; j < numPlanets; j++) {

      // get force to the distence between the planets
      sf::Vector2f force =
          planets[j].getPosition() - (planets[i].getPosition());

      // dont want to devide by 0 thanks dad :P
      if (force.x != 0 && force.y != 0) {
        force = force * ((g * planets[i].getMass() * planets[j].getMass()) /
                         ((force.x * force.x) +
                          (force.y * force.y))); // length before squareroot

        // finde the acceleration of planet i due to j
        sf::Vector2f acceleration = force * (1 / planets[i].getMass());
        // add that acceleration to the runing total for i
        accelerations[i] += acceleration;
        // same for planet j
        acceleration = force * (-1 / planets[j].getMass());
        accelerations[j] += acceleration;

      } else {
        // destQ.push(i);
        // destQ.push(j);
        // destruct TODO:
      }
    }
  }

  // if(destQ.length != 0) {
  //  destQ = removeDups(destQ);
  //}

  // update planet positions

  for (i = 0; i < planets.size(); i++) {
    planets[i].setAcceleration(accelerations[i]);
    planets[i].update(dt);
  }

  delete[] accelerations;

  // updateVisiblePlanetShapes(mode, windowSize);
  updateViewPort(mode, windowSize);
}

void pps::Universe::updateViewPort(int mode, sf::Vector2u windowSize) {
  float scale = 1;
  size_t i = 0; // for loops

  // if wehave a at least oneplanet set theextents to that one.
  if (planets.size() >= 1) {
    universeExtents[0] = planets[0].getPosition();
    universeExtents[1] = universeExtents[0];
  }

  sf::Vector2f tempPosition;
  for (i = 0; i < planets.size(); i++) {
    tempPosition = planets[i].getPosition();
    if (tempPosition.x < universeExtents[0].x) {
      universeExtents[0].x = tempPosition.x;
    }
    if (tempPosition.y < universeExtents[0].y) {
      universeExtents[0].y = tempPosition.y;
    }
    if (tempPosition.x > universeExtents[1].x) {
      universeExtents[1].x = tempPosition.x;
    }
    if (tempPosition.y > universeExtents[1].y) {
      universeExtents[1].y = tempPosition.y;
    }
  }

  // theres probubly an easyer way to do this
  if (universeExtents[0].x < maxUniverseExtentsSeen[0].x) {
    maxUniverseExtentsSeen[0].x = universeExtents[0].x;
  }
  if (universeExtents[0].y < maxUniverseExtentsSeen[0].y) {
    maxUniverseExtentsSeen[0].y = universeExtents[0].y;
  }
  if (universeExtents[1].x > maxUniverseExtentsSeen[1].x) {
    maxUniverseExtentsSeen[1].x = universeExtents[1].x;
  }
  if (universeExtents[1].y > maxUniverseExtentsSeen[1].y) {
    maxUniverseExtentsSeen[1].y = universeExtents[1].y;
  }

  switch (mode) {
  case 0: // to scale
    scale = 1;

    for (i = 0; i < planets.size(); i++) {
      planets[i].updateSprites(sf::Vector2f(), scale);
    }
    universAreaToDraw[0] = sf::Vector2f();
    universAreaToDraw[1] = (sf::Vector2f)windowSize;

    break;

  case 1: { // sclae o fit everything
    scale = windowSize.y / (universeExtents[0].y - universeExtents[1].y);
    if (scale < 0)
      scale *= -1;

    float temp = windowSize.x / (universeExtents[0].x - universeExtents[1].x);
    if (temp < 0)
      temp *= -1;

    if (temp < scale)
      scale = temp;

    for (i = 0; i < planets.size(); i++) {
      planets[i].updateSprites(universeExtents[0], scale); // scale and orgin?
    }
    universAreaToDraw[0] = universeExtents[0];
    universAreaToDraw[1] = universeExtents[1];
    break;
  }
  case 2: { // stretchy borader that stick to the max seen univers size
    scale = windowSize.y /
            (maxUniverseExtentsSeen[0].y - maxUniverseExtentsSeen[1].y);
    if (scale < 0)
      scale *= -1;

    float temp = windowSize.x /
                 (maxUniverseExtentsSeen[0].x - maxUniverseExtentsSeen[1].x);
    if (temp < 0)
      temp *= -1;

    if (temp < scale)
      scale = temp;

    for (i = 0; i < planets.size(); i++) {
      planets[i].updateSprites(maxUniverseExtentsSeen[0],
                               scale); // scale and orgin?
    }
    universAreaToDraw[0] = maxUniverseExtentsSeen[0];
    universAreaToDraw[1] = maxUniverseExtentsSeen[1];
    break;
  }
  }

  // update Trails

  // for (uint j = 0; j < trails.length; j++) {
  // ImGui::Begin("Universe Debug");
  // changes the positon of a shape

  /*  if (drawTrails) {
      if (trails.frameCount >= trails.frameDelay) {
        trails.frameCount = 0;
        for (uint i = 0; i < planets.size(); i++) {
          for (uint j = 0; j < trails.length - 1; j++) {
            trails.lines[i][j].position = trails.lines[i][j + 1].position;
          }
          trails.lines[i][trails.length - 1].position = vps[i].getPosition();
        }
      } else {
        trails.frameCount++;
      }
    }*/
}

void pps::Universe::setDrawTrails(bool dt) {
  if (dt && !drawTrails) {
    drawTrails = dt;
    for (unsigned i = 0; i < planets.size(); i++) {
      planets[i].enableTrail();
    }
  } else if (!dt && drawTrails) {
    drawTrails = dt;
    for (unsigned i = 0; i < planets.size(); i++) {
      planets[i].disableTrail();
    }
  }
}

// std::vector<sf::CircleShape> pps::Universe::getVisiblePlanets() { return vps;
// }
// std::vector<sf::VertexArray> pps::Universe::getVisibleTrails() {
//  if (drawTrails) {
//    return trails.lines;
//  } else {
//    return {};
//  }
//}
