#include <iostream>
#include "Car.h"

using namespace std;

int main() {
	Car car1;
	cout << "car1現在的速度=" << car1.speed << endl;
	car1.speed = 70;
	cout << "car1現在的速度=" << car1.speed << endl;
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	cout << "car1加速後的速度=" << car1.speed << endl;
}


Car.h
#include <iostream>


class Car{
	public:
		int speed;
		void turbo(int);
		Car();
};


Car.cpp
#include "Car.h"

Car::Car(){
	speed = 20;
}

void Car::turbo(int s){
	speed += s;
}
