#include <iostream>
using namespace std;

#define MAC

#ifdef MAC
#define OS "MAC_OS_VERSION_10_0"
#else
#define OS "WINDOW11"
#endif

int main() {
	cout << OS << endl;
}
