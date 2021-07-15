#include <iostream>
#include "circle.h"


using namespace std;



int main() {
	Circle c1(20);
	cout << "圓半徑是" << c1.radius << endl;
	cout << "圓周是" << c1.circumference() << endl;
	cout << "圓面積" << c1.areas() << endl;
}


circle.h



#ifndef __CIRCLE_H__
#define __CIRCLE_H__

class Circle{
	public:
		//field欄位
		int radius;

		//建構式
		Circle(int radius);

		//method方法
		float areas();	
		float circumference();
};

#endif



circle.cpp

#include <cmath>
#include "circle.h"

//建構式
Circle::Circle(int radius){
	this -> radius = radius;
}
//method方法
float Circle::areas(){
	return M_PI * radius * radius;
}

float Circle::circumference(){
	return radius * 2 * M_PI;
}


