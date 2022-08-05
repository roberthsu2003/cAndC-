#include <iostream>
typedef struct point {
  float x;
  float y;
} Point;

typedef struct size {
  float width;
  float height;
} Size;

typedef struct rect {
  Point p;
  Size s;
} Rect;

using namespace std;
/*
Rect modifyRect(Rect rec,int x, int y, float width, float
 height){
        rec.p.x = x;
        rec.p.y = y;
        rec.s.width = width;
        rec.s.height = height;
        return rec;
 }
*/

void modifyRect(Rect* rec,int x, int y, float width, float height) {
	rec -> p.x = x;
	rec -> p.y = y;
	rec -> s.width = width;
	rec -> s.height = height;
	
}
int main() {
  Rect r1;
  r1.p = {4.5, 5.6};
  r1.s = {21.5, 18.9};

  cout << "r1的x座標:" << r1.p.x << endl;
  cout << "r1的y座標:" << r1.p.y << endl;
  cout << "r1的width座標:" << r1.s.width << endl;
  cout << "r1的height座標:" << r1.s.height << endl;

  //修改結構
  modifyRect(&r1, 0, 0, 100, 100);
  cout << "r1的x座標:" << r1.p.x << endl;
  cout << "r1的y座標:" << r1.p.y << endl;
  cout << "r1的width座標:" << r1.s.width << endl;
  cout << "r1的height座標:" << r1.s.height << endl;
}
