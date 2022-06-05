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

class Triangle:public Rectangle{
	public:
	Triangle(int width, int height);
	float area();
};

Triangle::Triangle(int width, int height):Rectangle(width,height){
	
}

float Triangle::area(){
	return width * height / 2.0;
}
#endif


main.cpp

#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	Square s(10);
	cout << "s正方形的面積是:" << s.area() << endl;

	Rectangle r(30, 20);
	cout << "r矩形的面積是:" << r.area() << endl;

	Triangle t(30,20);
	cout << "t三角形的面積是:" << t.area() << endl;
}
