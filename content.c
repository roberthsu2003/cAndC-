main.cpp

#include <iostream>
#include "circle.h"

using namespace std;

int main() {
	Circle c1;
	cout << c1._radius << endl;
} 


circle.h

#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#define PI 3.14159
class Circle{
	private:
		int _radius;
};

#endif
