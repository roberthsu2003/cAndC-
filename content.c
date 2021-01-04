//Car.h

#ifndef __CAR__
#define __CAR__

namespace Ford{
	class Car{
		private:
			int speed=0;
			
		public:
		void turbo(int);
		int getSpeed();
	};
}

#endif

//Car.cpp

#include "Car.h"
using namespace Ford;

void Car::turbo(int s){
	speed += s;
}
int Car::getSpeed(){
	return speed;
}


//main.cpp
#include <iostream>
#include "Car.h"
using namespace Ford;
using namespace std;

int main() {
	Car car1;
	car1.turbo(50);
	cout << car1.getSpeed() << endl;
}
