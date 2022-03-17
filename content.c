main.cpp

#include <iostream>
#include "rectangle.h"
using namespace std;



int main() {
	int width,height;
	cout << "請輸入width:";
	cin >> width;
	cout << "請輸入height:";
	cin >> height;
	
	Rectangle rec1(width,height);
	cout << "面積是" << rec1.area() << endl;

	cout << MAC << endl;
	cout << APPLE << endl;
}




rectangle.h

#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#define MAC 1
#define APPLE 2

int  add(int a, int b){
	return a + b;
}

class Rectangle{
	public:
		int width;
		int height;

		//自訂的建構式
		Rectangle(int w, int h){
			width = w;
			height = h;
		}
		
		int area(){
			return width * height;
		}
};

#endif
