#include <iostream>
using namespace std;

typedef enum direction { 
	North, South, East, West 
} Direction;

int main() {
  Direction destination = North;
  cout << "目標=" << destination << endl;
	switch (destination){
		case North:
			cout << "向北" << endl;
			break;

		case South:
			cout << "向南" << endl;
			break;

		case East:
			cout << "向東" << endl;
			break;

		case West:
			cout << "向西" << endl;
			break;

		default:
			break;
		 
	}
}
