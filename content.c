tools.h

#ifndef __TOOLS_H__
#define __TOOLS_H__

class Square{
	public:
		int width;
		Square(int width);
		int area();
};

Square::Square(int width){
	this->width = width;
}

int Square::area(){
	return width * width;
}

class Rectangle:public Square{
	public:
	int height;
	Rectangle(int width, int height);
	int area();
};

Rectangle::Rectangle(int width, int height):Square(width){	
	this -> height = height;
}

int Rectangle::area(){
	return width * height;
}
#endif


main.cpp

#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	Square s(10);
	cout << "s的面積是:" << s.area() << endl;

	Rectangle r(30, 20);
	cout << "r的面積是:" << r.area() << endl;
}
