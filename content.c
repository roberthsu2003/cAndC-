#include <iostream>
using namespace std;

typedef struct point{
	double x;
	double y;
}Point;

int main() {
	Point p1;
	p1.x = 10.0;
	p1.y = 20.0;

	cout << p1.x << endl;
	cout << p1.y << endl;
}
