main.cpp

#include "size.h"
#include <iostream>

using namespace std;
int main() {
	Size tri1(10, 20);
	cout << "tri1面積:" << tri1.area() << endl;
	cout << "tri1斜邊:" << tri1.edge() << endl;
}

size.h

#ifndef __SIZE_H__
#define __SIZE_H__

#include <math.h>

class Size {
public:
  unsigned int x;
  unsigned int y;
  Size(int n, int m);

	//實體方法
  double area(); //傳出面積

	//實體方法
	double edge(); //傳出斜邊
		

};

#endif


size.cpp

#include "size.h"

Size::Size(int n, int m) {
    x = n;
    y = m;
}

double Size::area() {
		return x * y / 2;
		//1000行
}

double Size::edge(){ //傳出斜邊
		//1000行
		return sqrt(pow(x,2) + pow(y,2));
	}
