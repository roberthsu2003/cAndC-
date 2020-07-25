#include "Person.h"
#include "Person.h"

#include <iostream>

using namespace std;
int main() {
	int radius = 10;
	float area = SQUARE(radius) * PI;
	cout << "面積是:" << area << endl;
}





Person.h
#define PI 3.14159
#define SQUARE(x) (x) * (x)

//預防被重覆的#include
#ifndef PERSON_H_
#define PERSON_H_
class Person{
	
};
#endif
