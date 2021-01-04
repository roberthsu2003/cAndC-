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


}
