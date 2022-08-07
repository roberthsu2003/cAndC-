#include <iostream>
typedef enum direction{
	North,
	South,
	East,
	West
}Direction;

using namespace std;
int main() {
	Direction destination = South;
	cout << destination << endl;
}
