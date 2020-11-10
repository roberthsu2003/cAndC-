#include <iostream>
#include "Car.h"

using namespace std;

int main() {
	Car car0;
	cout << "car0現在的速度=" << car0.speed << endl;
	

	Car car1(70);
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
		//建構式overload
		Car();
		Car(int);
};


Car.cpp
#include "Car.h"

Car::Car(){
	speed = 20;
}

Car::Car(int s){
	speed = s;
}

void Car::turbo(int s){
	speed += s;
}
