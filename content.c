#include <iostream>
using namespace std;

typedef enum direction{
	North,
	South,
	East,
	West
}Direction;

int main() {
	Direction destination = North;
	destination = South;

	switch(destination){
		case North:
			cout << "north" << endl;
			break;
		case South:
			cout << "south" << endl;
			break;
		case East:
			cout << "east" << endl;
			break;
		case West:
			cout << "west" << endl;
			break;
	}
}
