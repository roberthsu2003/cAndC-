#include <iostream>
using namespace std;
typedef enum direction{
	North,
	South,
	East,
	West
}direction;

int main() {
	direction desc;
	desc = North;
	cout << "desc內的值是:" << desc << endl;
	return 0;
}
