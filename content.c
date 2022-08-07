#include <iostream>
using namespace std;

#define MAC

#ifndef MAC

#define OS "MAC_OS_VERSION_10_0"

#else

#define OS "Window11"

#endif

int main() {
	cout << OS << endl;
}
