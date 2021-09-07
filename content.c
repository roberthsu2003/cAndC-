#include <iostream>
using namespace std;

#define MAC

#ifndef MAC
#define OS "WINDOW11"
#else
#define OS "MAC_OS_VERSION_10_0"
#endif

int main() {
	cout << OS << endl;
}
