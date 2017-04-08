
#include "CircularArray.hpp"

#include <cstring>
#include <iostream>
// using namespace pps;

//            (a[1])prev-v       v-next(a[a.size()-1])
// | 0 | 1 | 2 | 3 | 4 | 5 | 6 | x |
//  front^                   ^front(a[0])
// size = 5
// capacity = 8

pps::CircularArray::CircularArray() {
  front = 0;
  dataSize = 1;
  data = new sf::Vector2f[dataSize];
}
pps::CircularArray::CircularArray(int newSize) {
  front = 0;
  dataSize = newSize;
  data = new sf::Vector2f[dataSize];
}

pps::CircularArray::CircularArray(const CircularArray &other) {
  front = other.front;
  dataSize = other.dataSize;
  data = new sf::Vector2f[dataSize];
  for (int i = 0; i < dataSize; i++) {
    data[i] = other.data[i];
  }
}

pps::CircularArray &pps::CircularArray::
operator=(const pps::CircularArray &other) {

  sf::Vector2f *newData = new sf::Vector2f[other.dataSize];

  delete[] data;

  data = newData;
  front = other.front;
  dataSize = other.dataSize;
  for (int i = 0; i < dataSize; i++) {
    data[i] = other.data[i];
  }

  return *this;
}

pps::CircularArray::CircularArray(int newSize, sf::Vector2f defaultValue) {
  front = 0;
  dataSize = newSize;
  data = new sf::Vector2f[dataSize];
  for (int i = 0; i < dataSize; i++) {
    // data[i].x = defaultValue.x;
    data[i] = defaultValue;
    //  std::cout << i << " :i , " << data[i].x << data[i].y;
  }
}

pps::CircularArray::~CircularArray() noexcept { delete[] data; }

std::ostream &pps::operator<<(std::ostream &os,
                              const pps::CircularArray &circularArray) {
  os << "{ ";

  for (int i = 0; i < circularArray.size(); i++) {
    os << "(" << circularArray[i].x << ", " << circularArray[i].y << ")";
    if (i != circularArray.size() - 1) {
      os << " , ";
    }
  }
  os << " }";

  return os;
}

int pps::CircularArray::size() const { return dataSize; }

void pps::CircularArray::push(sf::Vector2f item) {
  front = (front + 1) % dataSize;
  data[front] = item;
}

// | 3 | 2 | 1 | 5 | 4 |
//           ^front
// =
// | 5 | 5 | 5 | 5 | 5 | 5 | 4 | 3 | 2 | 1 |
//                                       ^front
// =
// | 3 | 2 | 1 |
//           ^front
void pps::CircularArray::resize(int newSize) {
  sf::Vector2f *oldData = data;

  // min array is size 1
  if (newSize < 1)
    newSize = 1;

  data = new sf::Vector2f[newSize];

  int numItemsToCopy = dataSize;
  if (dataSize > newSize) {
    numItemsToCopy = newSize;
  }
  int index;
  for (int i = 0; i < numItemsToCopy; i++) {
    index = (front - i) % dataSize;
    if (index < 0)
      index = dataSize + index;

    data[newSize - 1 - i] = oldData[index];
  }

  // fill remeaning spaces with oldes data point
  index = (front + 1) % dataSize;
  if (index < 0)
    index = dataSize + index;
  for (int i = numItemsToCopy; i < newSize; i++) {
    data[newSize - 1 - i] = oldData[index];
  }

  dataSize = newSize;
  front = dataSize - 1; // see spec comment
}

// f = 0 = front
//| 3 | 2 | 1 | 5 | 4 |
// -3  -4  -5  -6  -7    //i
//  2   1   f  -1  -2    //i
//  7   6   5   4   3    //i
//------------------------------
//  0   1   2   3   4    //index
sf::Vector2f &pps::CircularArray::operator[](int i) {

  int index = (front - i) % dataSize;
  if (index < 0)
    index = dataSize + index;
  return data[index];
}

sf::Vector2f const &pps::CircularArray::operator[](int i) const {
  int index = (front - i) % dataSize;
  if (index < 0)
    index = dataSize + index;
  return data[index];
}
