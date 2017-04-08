#ifndef _PPS_CIRCULARARRAY_HPP_
#define _PPS_CIRCULARARRAY_HPP_

#include <SFML/Graphics.hpp>

#include <cstring>
#include <iostream>
#include <vector>
namespace pps {

class CircularArray {

private:
  int front;          // index of the first ellement in the array in the
  sf::Vector2f *data; // array for the data
  int dataSize;       // size of the array

  friend std::ostream &operator<<(std::ostream &os,
                                  const CircularArray &circularArray);

public:
  CircularArray();
  CircularArray(int startSize);
  CircularArray(int newSize, sf::Vector2f defaultValue);
  // Copy constructor
  CircularArray(const CircularArray &other);
  // Move constructor
  // CircularArray(CircularArray &&other) noexcept;
  // Destructor
  ~CircularArray() noexcept;

  // Copy Assignment operator
  //
  //
  CircularArray &operator=(const CircularArray &other);
  // Move Assignment operator
  // CircularArray<T> &operator=(CircularArray<T> &&other) noexcept;

  // prints it out in the fourm
  // std::string toString();

  int size() const;
  // overwrites the last emaent with item and makes that the front
  void push(sf::Vector2f item);

  // resizes the array copying the data starting from
  // the front moving back
  void resize(int newSize);

  // used to access an ellement with 0 being the front and
  // size-1 being the back it also loops around so -1 is
  // also the back
  sf::Vector2f &operator[](int i);
  sf::Vector2f const &operator[](int i) const;
};
}

#endif /* end of include guard: _PPS_CIRCULARARRAY_HPP_ */
