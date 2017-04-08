
#include "CircularArray.hpp"
#include <stdio.h>

#include <SFML/Graphics.hpp>

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  pps::CircularArray arr;
  pps::CircularArray A = pps::CircularArray();
  pps::CircularArray B = pps::CircularArray(7);
  pps::CircularArray C = pps::CircularArray(10, sf::Vector2f(4, 2));

  // arr = pps::CircularArray(10, sf::Vector2f(4, 2));
  // std::cout << "Test" << arr[0] << std::endl;
  std::cout << arr << std::endl;
  std::cout << A.size() << A << std::endl;

  std::cout << B.size() << B << std::endl;

  std::cout << C.size() << C << std::endl;

  A[0] = sf::Vector2f(1, 94.34);
  std::cout << "change A[0] :" << A << std::endl;

  A[23] = sf::Vector2f(23, 94.64);
  std::cout << "change A[23] :" << A << std::endl;

  A.resize(7);
  std::cout << "A.resize(7) :" << A << std::endl;

  std::cout << "    write continus data into A " << std::endl;

  for (int i = 0; i < 42; i++) {
    A.push(sf::Vector2f(i, -1));
    std::cout << A << std::endl;
  }

  A.resize(3);
  std::cout << "A.resize(3) :" << A << std::endl;
  // arr[] = 42.0;

  return 0;
}
