tools.h

#ifndef __TOOLS_H__
#define __TOOLS_H__

class Square{
	public:
	int width;
	Square();
	Square(int width);
	int getArea();

};

Square::Square(){
	width = 0;
}
Square::Square(int width){
	this->width = width;
}
int Square::getArea(){
	return width * width;
}
#endif

main.cpp

#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	Square s1(10);
	cout << "s1的寬是" << s1.width << endl;
	cout << "s1面積是:" << s1.getArea() << endl;

	cout << "請輸入正方形的一邊:";
	Square s2;
	cin >> s2.width;
	cout << "s2的寬是" << s2.width << endl;
	cout << "s2面積是:" << s2.getArea() << endl;
	
}
