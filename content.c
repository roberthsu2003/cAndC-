#include <iostream>
using namespace std;

typedef enum direction{
	North,
	South,
	East,
	West
}Direction;

int main() {
	Direction dest = West;
	switch(dest){
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
		default:
		cout << "其它" << endl;

	}


}
