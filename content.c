#include <iostream>

#define MAC

#ifdef MAC
#define OS "MAC_OS_VERSION_10_0"
#else 
#define OS "Window10"
#endif

int main() {
  std::cout << OS << std::endl;
}
