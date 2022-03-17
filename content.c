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

	
}


rectangle.h

#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__



class Rectangle{
	public:
		int width;
		int height;					

		//自訂的建構式
		Rectangle(int w, int h);		
		int area();
};

#endif


rectangle.cpp
#include "rectangle.h"

Rectangle::Rectangle(int w, int h){
			width = w;
			height = h;
		}
		
int Rectangle::area(){
	return width * height;
}
