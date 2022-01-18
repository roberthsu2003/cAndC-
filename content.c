main.cpp

#include <iostream>
#include "circle.h"

using namespace std;

int main() {
	Circle c1(10);
	cout << c1.getRadius() << endl;
} 


circle.h

#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#define PI 3.14159
class Circle{
	private:
		int _radius;
	public:
		Circle(int);
		int getRadius(void);
};

Circle::Circle(int r){
	_radius = r;
}

int Circle::getRadius(void){
	return _radius;
}

#endif
