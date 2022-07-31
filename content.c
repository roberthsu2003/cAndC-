#include <iostream>
using namespace std;
//定義結構point,成員有x和y
//typedef 重新定義資料類型的名稱
typedef struct point{
	float x;
	float y;
}Point;

int main() { 
	Point p1;
	p1.x = 4.5;
	p1.y = 6.5;

	Point p2;
	p2.x = 8.3;
	p2.y = 9.6;

	cout << p1.x << endl;
	cout << p1.y << endl;
	cout << "=================" << endl;
	cout << p2.x << endl;
	cout << p2.y << endl;
}
