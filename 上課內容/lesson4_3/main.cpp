#include <iostream>
using namespace std;

typedef enum direction {
NORTH, SOUTH, EAST, WEST 
} Direction;

int main() {
	Direction destination;
	destination = NORTH;
	cout << destination << endl;
	destination = WEST;

	switch(destination){
		case NORTH:
			cout << "北方" << endl;
			break;
		case SOUTH:
			cout << "南方" << endl;
			break;
		case EAST:
			cout << "東方" << endl;
			break;
		case WEST:
			cout << "西方" << endl;
			break;
		default:
			cout << "其它" << endl;
	}
}
