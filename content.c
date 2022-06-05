BMI.h

#ifndef __BMI_H__
#define __BMI_H__

class BMI{
	private:
		float height;
		float weight;

	public:
		BMI(float weight, float Height);
		float getHeight();
		float getWeight();
};

BMI::BMI(float weight, float height){
	this -> weight = weight;
	this -> height = height;
}

float BMI::getHeight(){
	return height;
}

float BMI::getWeight(){
	return weight;
}
#endif



main.cpp
#include <iostream>
#include "BMI.h"

using namespace std;
int main() {
	BMI bmi1(78, 170);
	cout << "bmi1的身高是" << bmi1.getHeight() << endl;
	cout << "bmi1的體重是" << bmi1.getWeight() << endl;
}
