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
#endif



main.cpp

#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	Square s(10);
	cout << "s的面積是:" << s.area() << endl;
}
