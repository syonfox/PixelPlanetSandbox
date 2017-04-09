#include "Planet.hpp"
#include "CircularArray.hpp"
#include "imgui-SFML.h"
#include "imgui.h"
#include <SFML/Graphics.hpp>
#include <sstream> // std::ostringstream
#include <string>

// void pps::Planet::SetFont(sf::Font *f) { font = f; }

sf::Font pps::Planet::font = initFont();

sf::Font pps::Planet::initFont() {
  sf::Font f;
  f.loadFromFile("res/Capture_it.ttf");

  return f;
}

pps::Planet::Planet() {
  name = "";
  _isNameEnabled = false;
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

  // font = sf::Font();
  textName.setFont(font);
  textName.setString(name);

  positionHistory = pps::CircularArray(1, position);

  _isTrailEnabled = false;
  trailLength = 0;
  trailLine = sf::VertexArray(sf::LinesStrip, 0);
  trailColor = sf::Color::Blue;
  frameDelay = 100;
  frameCount = 0;

  imguiData = nullptr;
}
pps::Planet::Planet(std::string iname, float ir, float im, sf::Vector2f ip,
                    sf::Vector2f iv, sf::Color icolor) {
  name = iname;
  _isNameEnabled = false;
  radius = ir;
  mass = im;
  position = ip;
  velocity = iv;
  color = icolor;
  shape = sf::CircleShape(radius);
  shape.setFillColor(color);
  shape.setOrigin(radius, radius); // r= radius
  shape.setPosition(position);

  textName.setFont(font);
  textName.setString(name);
  textName.setOrigin(textName.getGlobalBounds().width / 2,
                     textName.getGlobalBounds().height / 2);

  positionHistory = pps::CircularArray(1, position);

  _isTrailEnabled = false;
  trailLength = 0;
  trailLine = sf::VertexArray(sf::LinesStrip, 0);

  trailColor = color;
  frameDelay = 100;
  frameCount = 0;

  enableTrail();

  imguiData = nullptr;
}

pps::Planet::Planet(const Planet &other) {

  name = other.name;
  _isNameEnabled = other._isNameEnabled;
  radius = other.radius;
  mass = other.mass;
  position = other.position;
  velocity = other.velocity;
  // acceleration = other.acceleration;

  color = other.color;

  shape = other.shape;

  textName = other.textName;

  positionHistory = other.positionHistory;

  _isTrailEnabled = other._isTrailEnabled;
  trailLength = other.trailLength;

  trailLine = other.trailLine;

  trailColor = other.trailColor;
  frameDelay = other.frameDelay;
  frameCount = other.frameCount;

  imguiData = nullptr;
}

pps::Planet::~Planet() { deleteImGuiData(); }

void pps::Planet::setupImGuiData() {
  imguiData = new ImGuiData();

  // imguiData->editOnChange = false;

  size_t lengthtoCopy = name.size();
  if (lengthtoCopy > imguiData->nameLength) {
    lengthtoCopy = imguiData->nameLength;
  }
  for (size_t i = 0; i < lengthtoCopy; i++) {
    imguiData->nameBuf[i] = name.c_str()[i];
  }
  imguiData->m = mass;
  imguiData->r = radius;

  imguiData->p[0] = position.x;
  imguiData->p[1] = position.y;
  imguiData->v[0] = velocity.x;
  imguiData->v[1] = velocity.y;
  imguiData->trailLength = trailLength;
  imguiData->historyLength = positionHistory.size();
  imguiData->trailEnabled = _isTrailEnabled;
  imguiData->frameDelay = frameDelay;

  imguiData->planetColor[0] = color.r / 255.0f;
  imguiData->planetColor[1] = color.g / 255.0f;
  imguiData->planetColor[2] = color.b / 255.0f;
  imguiData->trailColor[0] = trailColor.r / 255.0f;
  imguiData->trailColor[1] = trailColor.g / 255.0f;
  imguiData->trailColor[2] = trailColor.b / 255.0f;
}
void pps::Planet::deleteImGuiData() {
  delete imguiData;
  imguiData = nullptr;
}

void pps::Planet::draw(sf::RenderWindow &window) {
  //  window.draw(shape);
  //  if (_isTrailEnabled) {
  //    window.draw(trailLine);
  //  }
  drawPlanet(window);
  drawTrail(window);
}

void pps::Planet::drawPlanet(sf::RenderWindow &window) {
  window.draw(shape);
  if (_isNameEnabled) {
    window.draw(textName);
  }
}

void pps::Planet::drawTrail(sf::RenderWindow &window) {
  if (_isTrailEnabled) {
    window.draw(trailLine);
  }
}

void pps::Planet::updateSprites(sf::Vector2f orgin, float scale) {

  sf::Vector2f windowPlanetPosition = (position - orgin) * scale;
  shape.setPosition(windowPlanetPosition); // orgin is the univers position that
                                           // is maped to window position (0, 0)
                                           // withscale being a constant the
                                           // converts world units to pixels
  shape.setScale(scale, scale);
  textName.setPosition(windowPlanetPosition);

  if (_isTrailEnabled) {
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

std::string pps::Planet::getName() { return name; }
bool pps::Planet::isNameEnabled() { return _isNameEnabled; }

void pps::Planet::setName(std::string n) {
  name = n;
  textName.setString(name);
  textName.setOrigin(textName.getGlobalBounds().width / 2,
                     textName.getGlobalBounds().height / 2);
}
void pps::Planet::setIsNameEnabled(bool ine) { _isNameEnabled = ine; }

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
  ImGui::Text("Name: %s", name.c_str());

  ImGui::Text("Mass: %f  Radius: %f", mass, radius);
  ImGui::Text("Position:     (%f, %f)", position.x, position.y);

  ImGui::Text("Velocity:     (%f, %f)", velocity.x, velocity.y);

  ImGui::Text("Acceleration: (%f, %f)", acceleration.x, acceleration.y);
  ImGui::Text("History Length: %d  Trail Length: %d  Trail Enabled: %d",
              positionHistory.size(), trailLength, _isTrailEnabled);
  ImGui::Text("Planet Color:(%d,%d,%d,%d) Trail Color: (%d,%d,%d,%d) ", color.r,
              color.g, color.b, color.a, trailColor.r, trailColor.g,
              trailColor.b, trailColor.a);
  if (trailLength > 1) {
    ImGui::Text("Trail Line Color:(%d,%d,%d,%d) ", trailLine[0].color.r,
                trailLine[0].color.g, trailLine[0].color.b,
                trailLine[0].color.a);
  } else {
    ImGui::Text("Trail Line Color:(NA,NA,NA,NA) ");
  }

  ImGui::Text("Frame Delay: %d  Frame Count: %d", frameDelay, frameCount);
}

void pps::Planet::imguiDebugMenu() {

  if (ImGui::CollapsingHeader(name.c_str())) {
    if (ImGui::CollapsingHeader("Propertys")) {
      imguiDebugInfo();
    }

    if (ImGui::CollapsingHeader("Edit")) {

      if (imguiData == nullptr)
        setupImGuiData();
      // ImGui::Checkbox("Submint on Edit", &imguiData->editOnChange);

      if (ImGui::InputText("Name", imguiData->nameBuf, imguiData->nameLength,
                           ImGuiInputTextFlags_EnterReturnsTrue)) {
        setName(std::string(imguiData->nameBuf));
      }
      if (ImGui::ColorEdit3(" Planet Color", imguiData->planetColor)) {
        sf::Color tempColor =
            sf::Color((uint8_t)(imguiData->planetColor[0] * 255),
                      (uint8_t)(imguiData->planetColor[1] * 255),
                      (uint8_t)(imguiData->planetColor[2] * 255), 255);
        color = tempColor;
        shape.setFillColor(tempColor);
      }

      if (ImGui::InputFloat("Mass", &imguiData->m)) {
        if (imguiData->m < 0.0f) {
          imguiData->m = 0.0f;
        }
        mass = imguiData->m;
      }
      if (ImGui::InputFloat("Radius", &imguiData->r)) {
        if (imguiData->r < 0.0f) {
          imguiData->r = 0.0f;
        }
        radius = imguiData->r;
        shape = sf::CircleShape(radius);
        shape.setFillColor(color);
        shape.setOrigin(radius, radius); // r= radius
        shape.setPosition(position);
      }
      if (ImGui::InputFloat2("Position", imguiData->p,
                             ImGuiInputTextFlags_EnterReturnsTrue)) {
        position.x = imguiData->p[0];
        position.y = imguiData->p[1];
      }
      if (ImGui::InputFloat2("Velocity", imguiData->v,
                             ImGuiInputTextFlags_EnterReturnsTrue)) {
        velocity.x = imguiData->v[0];
        velocity.y = imguiData->v[1];
      }
      if (ImGui::InputInt("Trails Length", &imguiData->trailLength)) {
        if (imguiData->trailLength < 0) {
          imguiData->trailLength = 0;
        }
        setTrailLength(imguiData->trailLength);
      }
      if (ImGui::ColorEdit3("Trail Color", imguiData->trailColor)) {
        sf::Color tempColor =
            sf::Color((uint8_t)(imguiData->trailColor[0] * 255),
                      (uint8_t)(imguiData->trailColor[1] * 255),
                      (uint8_t)(imguiData->trailColor[2] * 255), 255);
        trailColor = tempColor;
        //      if (_isTrailEnabled) {
        for (int i = 0; i < trailLength; i++) {
          trailLine[i].color = tempColor;
        }
        //    }
      }

      // ImGui::SameLine();
      if (ImGui::InputInt("History Length", &imguiData->historyLength)) {
        if (imguiData->historyLength < imguiData->trailLength) {
          imguiData->historyLength = imguiData->trailLength;
        }
        setHistoryLength(imguiData->historyLength);
      }
      if (ImGui::InputInt("Frame Delay", &imguiData->frameDelay)) {
        if (imguiData->frameDelay < 0) {
          imguiData->frameDelay = 0;
        }
        setFrameDelay(imguiData->frameDelay);
      }
      if (ImGui::Checkbox("Draw Trail Enabled", &imguiData->trailEnabled)) {
        if (imguiData->trailEnabled) {
          enableTrail();
        } else {
          disableTrail();
        }
      }

      if (ImGui::Checkbox("Draw Name Enabled", &imguiData->nameEnabled)) {
        setIsNameEnabled(imguiData->nameEnabled);
      }

    } else if (imguiData == nullptr) {
      deleteImGuiData();
    }

    // ImGui::InputFloat("Position X", );
    // ImGui::SameLine();
    // ImGui::InputFloat("Position Y", &appy);
    // ImGui::InputFloat("Velocity X", &apvx);
    // ImGui::SameLine();
    // ImGui::InputFloat("Velocity Y", &apvy);
  }
}
