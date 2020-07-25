/*
#ifdef ... #else  #endif
*/

#include <iostream>
#define MAC 

#ifdef MAC
#define OS "MAC_OS_VERSION_10_0"
#else
#define OS "Window10"
#endif

using namespace std;
int main() {
	cout << OS << endl;
}
