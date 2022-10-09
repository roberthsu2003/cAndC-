main.cpp

#include "size.h"
#include <iostream>

//實體配合function的使用,使用call by reference
void addTwo(Size &s) {
  s.x += 2;
  s.y += 2;
}
using namespace std;
int main() {
  Size tri1(10, 20);
  Size tri2(25, 30);
  addTwo(tri1);
  addTwo(tri2);
  cout << "tri1-" << tri1.x << "-" << tri1.y << endl;
  cout << "tri1的面積是" << tri1.area() << endl;
  cout << "tri2-" << tri2.x << "-" << tri2.y << endl;
  cout << "tri2的面積是" << tri2.area() << endl;
}


size.h

#ifndef __SIZE_H__
#define __SIZE_H__

class Size {
public:
  unsigned int x;
  unsigned int y;
  Size(int n, int m) {
    x = n;
    y = m;
  }

	//實體方法
  double area() {
		return x * y / 2;
	}
};

#endif
