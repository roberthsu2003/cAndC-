#include <iostream>
using namespace std;

#define W 

#ifdef MAC

#define OS "MAC_OS_VERSION"

#else 

#define OS "Window10"

#endif

int main() {
  cout << OS << endl;
} 
