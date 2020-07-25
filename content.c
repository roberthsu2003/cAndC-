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
