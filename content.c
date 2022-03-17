#include <iostream>

#define MAC

#ifdef MAC
int i = 10;
#else
int i = 5;
#endif


using namespace std;

int main() {
	cout << i << endl;
}
