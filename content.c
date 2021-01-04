// Circle.h
#ifndef __CIRCLE__
#define __CIRCLE__
#define PI 3.14159
class Circle{
	public:
	int radius;
	Circle(int);
	float area(void);
};
#endif


//Circle.cpp
#include "Circle.h"

Circle::Circle(int r){
	radius = r;
}

float Circle::area(void){
	return PI * radius * radius;
}


//main.cpp
#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	int radius;
	cout << "請輸入半徑:";
	cin >> radius;
	Circle c1(radius);
	cout << "您的面積是:" << c1.area();

}
