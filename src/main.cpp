#include "FizzBuzz.h"

#include <iostream>

int main() {

  for (int i = 1; i <= 100; i++) {
    std::cout << fizzBuzz(i) << std::endl;
  }

  return 0;
}