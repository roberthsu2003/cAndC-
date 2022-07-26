#include <iostream>
using namespace std;

typedef enum direction{
	North,
	South,
	East,
	West
}Direction;

int main() {
	Direction destination;
	destination = East;

	switch(destination){
		case North:
		cout << "北" << endl;
		break;

		case South:
		cout << "南" << endl;
		break;

		case East:
		cout << "東" << endl;
		break;

		case West:
		cout << "西" << endl;
		break;
	}
}
