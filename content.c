//Car.h

#ifndef __CAR__
#define __CAR__

class Car{
	public:
	//類別的欄位(靜態成員變數)
	static int turboCount;
	int speed;
	void turbo(int);
	//類別的方法(靜態方法)
	//必需實作在class內
	int static getCount(){
		return turboCount;
	}
}

#endif

//Car.cpp
#include "Car.h"

int Car::turboCount = 0;
void Car::turbo(int s){
	speed += s;
	turboCount += 1;
}
