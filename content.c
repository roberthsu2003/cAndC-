#include <iostream>
#include "rectangle.h"
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	Rectangle rec1;
	cout << " rec1的寬是" << rec1.width << endl;
	cout << " rec1的高是" << rec1.height << endl;
	cout << " rec1的面積是" << rec1.area() << endl;

}


rectangle.h

#ifndef __RECTANGLE__H
#define __RECTANGLE__H

#include <stdlib.h>


class Rectangle{
	public:
	//field欄位
	int width;
	int height;

	//建構式(int,int)
	Rectangle(int w, int h){
		width = w;
		height = h;
	}
	//建構式()
	Rectangle(){
		width = rand() % 61 + 40;
		height = rand() % 61 + 40;
	}

	//method方法
	int area(){
		return width * height;
	}
};

#endif
