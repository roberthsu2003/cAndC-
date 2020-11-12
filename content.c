#include <iostream>
#include "Car.h"

int main() {
	Car car1;
	car1.speed = 70;

	Car* car2 = new Car();
	car2->speed = 70;

	Car* car3 = new Car(70);
	car3->speed = 90;
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
		Car(int speed);
};

#endif


Car.cpp
#include "Car.h"

Car::Car(){
	speed = 20;
}

Car::Car(int speed){
	this->speed = speed;
}
