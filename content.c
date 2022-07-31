#include <iostream>
using namespace std;
//定義結構point,成員有x和y
struct point{
	float x;
	float y;
};

int main() { 
	struct point p1;
	p1.x = 4.5;
	p1.y = 6.5;

	struct point p2;
	p2.x = 8.3;
	p2.y = 9.6;

	cout << p1.x << endl;
	cout << p1.y << endl;
	cout << "=================" << endl;
	cout << p2.x << endl;
	cout << p2.y << endl;
}
