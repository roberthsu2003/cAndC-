#include <iostream>
using namespace std;
//定義結構point,成員有x和y
//typedef 重新定義資料類型的名稱
typedef struct point{
	float x;
	float y;
}Point;

typedef struct size{
	float width;
	float height;
}Size;

//巢狀結構
typedef struct rect{
	Point p;
	Size s;
} Rect;

int main() { 
	Rect r1;
	r1.p = {4.5, 5.6};
	r1.s = {21.5, 18.9};

	cout << "r1的x座標:" << r1.p.x << endl;
	cout << "r1的y座標:" << r1.p.y << endl;
	cout << "r1的寬:" << r1.s.width<< endl;
	cout << "r1的高:" << r1.s.height << endl;
}
