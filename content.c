#include <iostream>
using namespace std;

typedef enum direction{
	North,
	South,
	East,
	West
} direction;

typedef enum Day{
	saturday = 6,
	sunday = 0,
	monday,
	tuesday,
	wednesday,
	thursday,
	friday
}Day;

int main() {
	direction dest = East;
	cout << dest << endl;


	Day today = wednesday;
	cout << today << endl;
	return 0;
}
