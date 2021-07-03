#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
	Rectangle rec1(10,20);
	

	cout << " rec1的寬是" << rec1.width << endl;
	cout << " rec1的高是" << rec1.height << endl;
	cout << " rec1的面積是" << rec1.area() << endl;

}


rectangle.h

#ifndef __RECTANGLE__H
#define __RECTANGLE__H

class Rectangle{
	public:
	//field欄位
	int width;
	int height;

	//建構式
	Rectangle(int w, int h){
		width = w;
		height = h;
	}

	//method方法
	int area(){
		return width * height;
	}
};

#endif
