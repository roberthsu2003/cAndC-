#include <iostream>

//#define MAC 101

#ifndef MAC

#define OS "Windows"

#else

#define OS "MAC_OS"

#endif

using namespace std;
int main() {
	cout << OS << endl;
}
