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
};

#endif

//Car.cpp
#include "Car.h"

//靜態成員變數一定要在外部給預設值
int Car::turboCount = 0;
void Car::turbo(int s){
	speed += s;
	turboCount += 1;
}

//main.cpp

#include <iostream>
#include "Car.h"
using namespace std;

int main() {
	Car car1;
	car1.speed = 70;
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);
	car1.turbo(1);

	Car car2;
	car2.speed = 40;
	car2.turbo(2);
	car2.turbo(2);
	car2.turbo(2);
	car2.turbo(2);
	car2.turbo(2);

	cout << "加速了多少次(靜態成員變數):" << Car::turboCount << endl;

	cout << "加速了多少次:(靜態方法)" << Car::getCount() << endl;
}
