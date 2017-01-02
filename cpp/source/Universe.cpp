#import "Universe.hpp"
#import "Planet.hpp"
#import <SFML/Graphics.hpp>
#include <vector>

pps::Universe::Universe() {
  planets = {};
  g = 10;
  vps = {};
}

void pps::Universe::addPlanet(pps::Planet p) {
  // maby if(p) ???
  planets.push_back(p);
}
void pps::Universe::delPlanet(size_t index) {
  if (index < planets.size()) {
    planets.erase(planets.begin() + index);
  }
}

float pps::Universe::getG() { return g; }
void pps::Universe::setG(float sg) { g = sg; }
int pps::Universe::getPlanetCount() { return planets.size(); }
sf::Vector2f *pps::Universe::getUniverseExtents() { return universeExtents; }
void pps::Universe::Update(sf::Time dt) {

  // loops vars
  size_t i = 0;
  size_t j = 0;
  vps = {};
  // zero out the acceleration
  for (i = 0; i < planets.size(); i++) {
    planets[i].a.x = 0.0;
    planets[i].a.y = 0.0;
  }

  // double for for each pair of planets
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
        // trace( "acc is: ( "+acc.x+" , "+acc.y+" )");
        planets[i].a += acc;
        // add that acceleration to the runing total for i
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

  float t = dt.asSeconds();
  // update planet positions
  for (i = 0; i < planets.size(); i++) {

    planets[i].p += (planets[i].v * t) + (0.5f * planets[i].a * (t * t));
    planets[i].v += planets[i].a * t;
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

    vps.push_back(planets[i].getCircleShape());
  }
}

std::vector<sf::CircleShape> pps::Universe::getVisiblePlanets() { return vps; }
