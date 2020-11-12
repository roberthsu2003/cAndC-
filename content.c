#include <iostream>

int main() {
	
}


Car.h
#include <iostream>
using namespace std;

#idndef __CAR__
#define __CAR__

class Car{
	public:
		int speed;
		Car();
};

#endif


Car.cpp
#include "Car.h"

Car::Car(){
	speed = 20;
}
