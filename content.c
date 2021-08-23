#include <iostream>

#define MAC

#ifndef MAC

#define OS "Window10"

#else 

#define OS "MAC_OS_VERSION_10_0"

#endif

int main() {
  std::cout << OS << std::endl;
}
