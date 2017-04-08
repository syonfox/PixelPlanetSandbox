#include "Planet.hpp"
#include "CircularArray.hpp"
#include "imgui-SFML.h"
#include "imgui.h"
#include <SFML/Graphics.hpp>
#include <sstream> // std::ostringstream
#include <string>

pps::Planet::Planet() {
  radius = 0;
  mass = 0;
  position = sf::Vector2f(0, 0);
  velocity = sf::Vector2f(0, 0);
  acceleration = sf::Vector2f(0, 0);
  color = sf::Color::White;
  shape = sf::CircleShape(radius);
  shape.setFillColor(color);
  shape.setOrigin(radius, radius); // r= radius
  shape.setPosition(position);

  positionHistory = pps::CircularArray(1, position);

  _isTrailEnabled = false;
  trailLength = 0;
  trailLine = sf::VertexArray(sf::LinesStrip, 0);
  trailColor = sf::Color::Green;
  frameDelay = 100;
  frameCount = 0;
}
pps::Planet::Planet(float ir, float im, sf::Vector2f ip, sf::Vector2f iv,
                    sf::Color icolor) {
  radius = ir;
  mass = im;
  position = ip;
  velocity = iv;
  color = icolor;
  shape = sf::CircleShape(radius);
  shape.setFillColor(color);
  shape.setOrigin(radius, radius); // r= radius
  shape.setPosition(position);

  positionHistory = pps::CircularArray(1, position);

  _isTrailEnabled = false;
  trailLength = 0;
  trailLine = sf::VertexArray(sf::LinesStrip, 0);
  trailColor = sf::Color::Green;
  frameDelay = 100;
  frameCount = 0;

  enableTrail();
}
pps::Planet::Planet(const Planet &other) {

  radius = other.radius;
  mass = other.mass;
  position = other.position;
  velocity = other.velocity;
  color = other.color;

  shape = sf::CircleShape(radius);
  shape.setFillColor(color);
  shape.setOrigin(radius, radius); // r= radius
  shape.setPosition(position);

  positionHistory = pps::CircularArray(other.positionHistory);

  _isTrailEnabled = other._isTrailEnabled;
  trailLength = other.trailLength;
  trailLine = sf::VertexArray(sf::LinesStrip, trailLength);
  trailColor = other.trailColor;
  frameDelay = other.frameDelay;
  frameCount = other.frameCount;
}

void pps::Planet::draw(sf::RenderWindow &window) {
  window.draw(shape);
  if (_isTrailEnabled) {
    window.draw(trailLine);
  }
}

void pps::Planet::drawPlanet(sf::RenderWindow &window) { window.draw(shape); }

void pps::Planet::drawTrail(sf::RenderWindow &window) {
  if (_isTrailEnabled) {
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

  if (_isTrailEnabled) {
    // printf("\n trailLength:%d  hsixe:%d", trailLength,
    // positionHistory.size());
    for (int i = 0; i < trailLength; i++) {
      // printf("%d , ", i);
      trailLine[i].position = (positionHistory[i] - orgin) * scale;
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

  if (frameCount >= frameDelay) {
    frameCount = 0;
    positionHistory.push(position);
  } else {
    frameCount++;
  }
}

bool pps::Planet::isTrailEnabled() { return _isTrailEnabled; }

int pps::Planet::getTrailLength() { return trailLength; }

void pps::Planet::setTrailLength(unsigned length) {
  if (positionHistory.size() < length) {
    setHistoryLength(length);
  }
  trailLength = length;
  disableTrail();
  enableTrail();
}

void pps::Planet::enableTrail() {

  if (!_isTrailEnabled) {
    _isTrailEnabled = true;
    if (positionHistory.size() < trailLength) {
      setHistoryLength(trailLength);
    }
    trailLine = sf::VertexArray(sf::LinesStrip, trailLength);
    for (int i = 0; i < trailLength; i++) {
      trailLine[i] = sf::Vertex(position, trailColor);
    }
    // printf("Enabled trail\n");
  }
}

void pps::Planet::disableTrail() {
  if (_isTrailEnabled) {
    _isTrailEnabled = false;
    trailLine = sf::VertexArray(sf::Lines, 0);
  }
}

int pps::Planet::getHistoryLength() { return positionHistory.size(); }

void pps::Planet::setHistoryLength(int length) {
  positionHistory.resize(length);
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

void pps::Planet::imguiDebugInfo() const {
  ImGui::Text("Name:NA UID:NA Mass: %f  Radius: %f", mass, radius);
  ImGui::Text("Position:     (%f, %f)", position.x, position.y);

  ImGui::Text("Velocity:     (%f, %f)", velocity.x, velocity.y);

  ImGui::Text("Acceleration: (%f, %f)", acceleration.x, acceleration.y);
  ImGui::Text("History Length: %d  Trail Length: %d  Trail Enabled: %d",
              positionHistory.size(), trailLength, _isTrailEnabled);
}
