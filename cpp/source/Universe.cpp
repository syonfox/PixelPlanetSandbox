#import "Universe.hpp"
#import "Planet.hpp"
#include "imgui-SFML.h"
#include "imgui.h"
#import <SFML/Graphics.hpp>
#include <vector>

pps::Universe::Universe() {
  planets = {};
  g = 10;
  vps = {};
  maxUniverseExtentsSeen[0] = sf::Vector2f();
  maxUniverseExtentsSeen[1] = sf::Vector2f();
  drawTrails = true;
  printf("Ua\n");
  trails.length = 10;
  trails.ptr = 0;
  trails.shapes = {};
  trails.positions = {};
  trails.color = sf::Color::Green;
  trails.r = 2;
  trails.frameDelay = 100;
  trails.frameCount = 0;
  printf("Ub\n");
}

void pps::Universe::addPlanet(pps::Planet p) {
  planets.push_back(p);
  // if we add an item we have to add that many shapes
  for (uint i = 0; i < trails.length; i++) {
    trails.shapes.push_back(getTailsShape());
  }
}

void pps::Universe::delPlanet(size_t index) {
  if (index < planets.size()) {
    planets.erase(planets.begin() + index);
    // if we remove an iteam we have to remove that many shapes
    for (uint i = 0; i < trails.length; i++) {
      trails.shapes.pop_back();
    }
  }
}
void pps::Universe::setTrailLength(uint length) {
  trails.length = length;
  trails.shapes.clear();
  for (uint i = 0; i < trails.length * planets.size(); i++) {
    trails.shapes.push_back(getTailsShape());
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
  vps = {};

  // zero out the acceleration (2n)
  for (i = 0; i < planets.size(); i++) {
    planets[i].a.x = 0.0;
    planets[i].a.y = 0.0;
  }

  // double for for each pair of planets (c*n^2)
  // TODO: Optimize
  for (i = 0; i < planets.size(); i++) {
    for (j = i + 1; j < planets.size(); j++) {

      // get force to the distence between the planets
      sf::Vector2f force = planets[j].p - (planets[i].p);

      // dont want to devide by 0 thanks dad :P
      if (force.x != 0 && force.y != 0) {
        force = force * ((g * planets[i].m * planets[j].m) /
                         ((force.x * force.x) +
                          (force.y * force.y))); // length before squareroot

        // finde the acceleration of planet i due to j
        sf::Vector2f acc = force * (1 / planets[i].m);
        // add that acceleration to the runing total for i
        planets[i].a += acc;
        // same for planet j
        acc = force * (-1 / planets[j].m);
        planets[j].a += acc;

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
  float t = dt.asSeconds();

  for (i = 0; i < planets.size(); i++) {

    planets[i].p += (planets[i].v * t) + (0.5f * planets[i].a * (t * t));
    planets[i].v += planets[i].a * t;
  }
  updateVisiblePlanetShapes(mode, windowSize);
}
sf::CircleShape pps::Universe::getTailsShape() {
  sf::CircleShape temp = sf::CircleShape(trails.r);
  temp.setFillColor(trails.color);
  temp.setOrigin(trails.r, trails.r); // r= radius
  return temp;
}
void pps::Universe::updateVisiblePlanetShapes(int mode,
                                              sf::Vector2u windowSize) {
  float scale = 1;
  size_t i = 0; // for loops
  // if wehave a at least oneplanet set theextents to that one.
  if (planets.size() >= 1) {
    universeExtents[0] = planets[0].p;
    universeExtents[1] = planets[0].p;
  }

  for (i = 0; i < planets.size(); i++) {
    if (planets[i].p.x < universeExtents[0].x) {
      universeExtents[0].x = planets[i].p.x;
    }
    if (planets[i].p.y < universeExtents[0].y) {
      universeExtents[0].y = planets[i].p.y;
    }
    if (planets[i].p.x > universeExtents[1].x) {
      universeExtents[1].x = planets[i].p.x;
    }
    if (planets[i].p.y > universeExtents[1].y) {
      universeExtents[1].y = planets[i].p.y;
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
      vps.push_back(planets[i].getCircleShape(sf::Vector2f(), scale));
    }
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
      vps.push_back(planets[i].getCircleShape(universeExtents[0],
                                              scale)); // scale and orgin?
    }
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
      vps.push_back(planets[i].getCircleShape(maxUniverseExtentsSeen[0],
                                              scale)); // scale and orgin?
    }
    break;
  }
  }

  // update Trails

  // for (uint j = 0; j < trails.length; j++) {
  // ImGui::Begin("Universe Debug");
  // changes the positon of a shape

  if (drawTrails) {
    printf("fc: %d\n", trails.frameCount);
    // if (trails.frameCount >= trails.frameDelay) {
    if (true) {

      printf("a\n");
      trails.frameCount = 0;
      for (i = 0; i < planets.size(); i++) {
        printf("$$$ %d,  %d\n", trails.shapes.size(),
               i + (planets.size() * trails.ptr));
        trails.shapes[i + (planets.size() * trails.ptr)].setPosition(
            vps[i].getPosition());
      }
      trails.ptr++;
      printf("b\n");
      if (trails.ptr >= trails.length) {
        trails.ptr = 0;
      }
      printf("c1\n");
    } else {
      printf("c2\n");
      trails.frameCount++;
    }
    /*ImGui::Text(
        "trails ptr: %d, trails.shapes[i * 0] (%f,%f), trails.shapes[i * "
        "(planets.size()-1)] (%f, %f)",
        trails.ptr, trails.shapes[0].getPosition().x,
        trails.shapes[0].getPosition().y,
        trails.shapes[trails.length * (planets.size() - 1)].getPosition().x,
        trails.shapes[trails.length * (planets.size() - 1)].getPosition().y);
    ImGui::End();*/
  }
}

void pps::Universe::setDrawTrails(bool dt) {
  if (dt && !drawTrails) {
    printf("d\n");
    trails.ptr = 0;
  }
  drawTrails = dt;
}

std::vector<sf::CircleShape> pps::Universe::getVisiblePlanets() { return vps; }
std::vector<sf::CircleShape> pps::Universe::getVisibleTrails() {
  if (drawTrails) {
    return trails.shapes;
  } else {
    return {};
  }
}
