#include <iostream>
#include "Car.h"
using namespace std;

int main() {
	Car car1;
	//car1.speed = -20;

	Car* car2 = new Car();
	//car2->speed = 70;

	Car* car3 = new Car(70);
	//car3->speed = 90;

	Car car4(70);

	//Car::instanceCount = 10;

	cout << "目前Car實體的數量是=" << Car::getCount() << endl;
}


Car.h
#include <iostream>
using namespace std;

#ifndef __CAR__
#define __CAR__

class Car{
	private:
		//static 欄位,類別欄位
		static int _instanceCount;
		int _speed;

	public:
		
		//類別方法,必需在class內實作
		int static getCount(){
			return _instanceCount;
		}
		
		Car();
		Car(int speed);
};

#endif





Car.cpp
#include "Car.h"

int Car::_instanceCount = 0;

Car::Car(){
	_speed = 20;
	Car::_instanceCount += 1;
}

Car::Car(int speed){
	_speed = speed;
	Car::_instanceCount += 1;
}
