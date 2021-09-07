#include <iostream>
typedef enum direction{
	North,
	South,
	East,
	West
}Direction;

using namespace std;

int main() {
	Direction direct = East;
	cout << "方向是" << direct << endl;
}
