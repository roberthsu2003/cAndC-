/*
#ifndef ....#else .... #endif
*/
#include <iostream>

#define MAC

#ifndef MAC
#define OS "Window10"
#else
#define OS "MAC_OS_Version"
#endif

using namespace std;
int main() {
	cout << OS << endl;
}
