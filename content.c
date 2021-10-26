#include <iostream>
using namespace std;

typedef enum direction{
	North,
	South,
	East,
	West
}Direction;

//typedef enum direction Direction;
int main() {
	Direction dest = South;
	cout << "dest:" << dest << endl;
	return 0;
}
