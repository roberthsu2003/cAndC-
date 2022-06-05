main.h

#include <iostream>
#include "tools.h"

People p1;
People p2;
using namespace std;

int main() {
	cout << m << endl;
}

tools.h
#ifndef __TOOLS_H__
#define __TOOLS_H__

#define PI 3.14159
#define SQUARE(x) (x) * (x)

int m = 10;

int add(int a, int b){
	return a + b;
}

int substract(int a, int b){
	return a - b;
}

typedef enum direction{
	North,
	East,
	South,
	West
}Direction;

class People{
	
};


#endif
