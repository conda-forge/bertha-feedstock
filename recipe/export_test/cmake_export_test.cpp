#include <iostream>

#include <bertha/core.hpp>

int main(int argc, char **argv) {
  bertha::device d(0, 100);

  std::cout << "Device length: " << d.get_length() << std::endl;

  return 0;
}
