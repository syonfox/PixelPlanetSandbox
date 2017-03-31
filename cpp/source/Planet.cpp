#include "Planet.hpp"
#include <SFML/Graphics.hpp>

pps::Planet::Planet(float ir, float im, sf::Vector2f ip, sf::Vector2f iv,
                    sf::Vector2f ia, sf::Color icolor) {
  radius = ir;
  mass = im;
  position = ip;
  velocity = iv;
  acceleration = ia;
  color = icolor;
  shape = sf::CircleShape(radius);
  shape.setFillColor(color);
  shape.setOrigin(radius, radius); // r= radius
  shape.setPosition(position);

  positionHistory = 0;
  historyLength = 0;
  historyFront = 0;
  drawTrail = false;
  trailLength = 0;
  trailLine = sf::VertexArray(sf::LinesStrip, 0);
  trailColor = sf::Color::Green;
  frameDelay = 100;
  frameCount = 0;

  enableTrail();
}
pps::Planet::~Planet() {
  printf("test %ld  , m:%f\n", (long)(void *)positionHistory, mass);
  if (positionHistory != 0)
    delete[] positionHistory;
}
// sf::CircleShape pps::Planet::generateCircleShape() {
// if complex generation needed
//}
void pps::Planet::draw(sf::RenderWindow &window) {
  window.draw(shape);
  if (drawTrail) {
    window.draw(trailLine);
  }
}
void pps::Planet::updateSprites(sf::Vector2f orgin, float scale) {

  shape.setPosition((position - orgin) *
                    scale); // orgin is the univers position that
                            // is maped to window position (0, 0)
                            // withscale being a constant the
                            // converts world units to pixels
  shape.setScale(scale, scale);

  if (drawTrail == true) {
    for (long i = 0; i < trailLength; i++) {
      size_t index = ((long)historyFront - i) % historyLength;

      printf("i:%zu  ", i);
      printf("imath:%ld \n", ((long)historyFront - i) % historyLength);
      printf("p(%f,%f)   ", positionHistory[index].x, positionHistory[index].y);
      printf("o(%f,%f)\n", orgin.x, orgin.y);
      sf::Vector2f tempPos;
      tempPos.x = positionHistory[index].x - orgin.x;
      tempPos.y = positionHistory[index].y - orgin.y;

      tempPos *= scale;
      trailLine[i].position = tempPos;
    }
  }
}

float pps::Planet::getRadius() { return radius; }
float pps::Planet::getMass() { return mass; }
sf::Vector2f pps::Planet::getPosition() { return position; }
sf::Vector2f pps::Planet::getVelocity() { return velocity; }
sf::Vector2f pps::Planet::getAcceleration() { return acceleration; }

void pps::Planet::setPosition(sf::Vector2f p) { position = p; }
void pps::Planet::setVelocity(sf::Vector2f v) { velocity = v; }
void pps::Planet::setAcceleration(sf::Vector2f a) { acceleration = a; }

void pps::Planet::update(sf::Time dt) {
  float t = dt.asSeconds();
  position += (velocity * t) + (0.5f * acceleration * (t * t));
  velocity += acceleration * t;

  if (historyLength != 0) {
    if (frameCount >= frameDelay) {
      frameCount = 0;
      historyFront = (historyFront + 1) % historyLength;
      positionHistory[historyFront] = position;
    } else {
      frameCount++;
    }
  }
}

bool pps::Planet::isTrailEnabled() { return drawTrail; }

size_t pps::Planet::getTrailLength() { return trailLength; }

void pps::Planet::setTrailLength(unsigned length) {
  if (historyLength < length) {
    setHistoryLength(length);
  }
  trailLength = length;
  disableTrail();
  enableTrail();
}

void pps::Planet::enableTrail() {
  if (trailLength == 0) {
    setTrailLength(50);
  }
  if (!drawTrail) {
    drawTrail = true;
    if (historyLength < trailLength) {
      setHistoryLength(trailLength);
    }
    trailLine = sf::VertexArray(sf::LinesStrip, trailLength);
    for (size_t i = 0; i < trailLength; i++) {
      trailLine[i] = sf::Vertex(position, trailColor);
    }
  }
}
void pps::Planet::disableTrail() {
  drawTrail = false;
  trailLine = sf::VertexArray(sf::Lines, 0);
}

size_t pps::Planet::getHistoryLength() { return historyLength; }

void pps::Planet::setHistoryLength(size_t length) {

  sf::Vector2f *temp = new sf::Vector2f[length];
  if (historyLength == 0) {
    for (long i = 0; i < length; i++) {
      temp[i] = position;
    }

    // historyLength = length;
    // positionHistory = temp;
    // printf("hll:%zu\n", historyLength);
    // return;
  } else if (length <= historyLength) {
    for (long i = 0; i < length; i++) {
      temp[length - 1 - i] =
          positionHistory[(historyFront - i) % historyLength];
    }
  } else {
    for (long i = 0; i < historyLength; i++) {
      temp[length - 1 - i] =
          positionHistory[(historyFront - i) % historyLength];
    }

    size_t lastIndex = (historyFront + 1) % historyLength;
    for (long i = historyLength; i < length; i++) {
      temp[i] = positionHistory[lastIndex];
    }
  }

  historyLength = length;
  historyFront = length;
  printf("bef %ld  , m:%f\n", (long)(void *)positionHistory, mass);

  delete[] positionHistory;
  positionHistory = temp;
  printf("aft %ld  , m:%f\n", (long)(void *)positionHistory, mass);
}

//// FRAME DELAY /////
unsigned pps::Planet::getFrameDelay() { return frameDelay; }
void pps::Planet::setFrameDelay(unsigned delay) { frameDelay = delay; }

sf::CircleShape pps::Planet::getCircleShape(sf::Vector2f orgin, float scale) {

  shape.setPosition((position - orgin) *
                    scale); // orgin is the univers position that
                            // is maped to window position (0, 0)
                            // withscale being a constant the
                            // converts world units to pixels
  shape.setScale(scale, scale);

  return shape;
}
