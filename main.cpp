#include <iostream>
#include "hello.h"

int main(int, char**) {
  std::cout << "Build " << patch() << std::endl;
  std::cout << "Hello, world!" << std::endl;
}
