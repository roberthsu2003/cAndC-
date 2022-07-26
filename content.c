#include <iostream>

#define MAC

#ifdef MAC
#define OS "MAC_OS_VERSION"
#else
#define OS "Windows10"
#endif

using namespace std;

int main() { cout << OS << endl; }
