main.cpp

#include <iostream>
#include "circle.h"

using namespace std;

int main() {
	Circle c1(10);
	c1.setRadius(120);
	c1.setRadius(-10);
	c1.setRadius(50);
	cout << c1.getRadius() << endl;
} 

circle.h

#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
using namespace std;

#define PI 3.14159
class Circle{
	private:
		int _radius;
	public:
		Circle(int);
		int getRadius(void);
		void setRadius(int);
};

Circle::Circle(int r){
	_radius = r;
}

int Circle::getRadius(void){
	return _radius;
}

void Circle::setRadius(int r){
	if(r > 100){
		_radius = 100;
		cout << "radius被設為100" << endl;
	}else if(r<=0){
		_radius = 1;
		cout << "radius被設為1" << endl;
	}else{
		_radius = r;
	}
}

#endif
