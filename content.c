#include <iostream>

typedef enum direction{
	North,
	South,
	East,
	West
} Direction;

using namespace std;

int main() {
	Direction desc = South;
	desc = West;

	switch(desc){
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
