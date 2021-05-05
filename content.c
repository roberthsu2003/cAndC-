#include <iostream>
using namespace std;

typedef enum direction{
	North,
	South,
	East,
	West
} direction;

int main() {
	direction dest = East;
	cout << dest << endl;
	return 0;
}
