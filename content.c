tools.h

#ifndef __TOOLS_H__
#define __TOOLS_H__

class Square{
	public:
	int width;
	Square(int width);
	int getArea();

};

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
	cout << "面積是:" << s1.getArea() << endl;
}
