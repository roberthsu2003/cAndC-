#include <iostream>
typedef struct point{
	float x;
	float y;
}Point;

typedef struct size{
	float width;
	float height;
}Size;

typedef struct rect{
	Point p;
	Size s;
}Rect;

using namespace std;
int main() {
	Rect r1;
	r1.p = {4.5, 5.6};
	r1.s = {21.5, 18.9};

	cout << "r1的x座標:" << r1.p.x << endl;
	cout << "r1的y座標:" << r1.p.y << endl;
	cout << "r1的width座標:" << r1.s.width << endl;
	cout << "r1的height座標:" << r1.s.height << endl;
	
}
