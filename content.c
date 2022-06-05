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
		void setHeight(float height);
		void setWeight(float weight);
};

void BMI::setHeight(float height){
	if(height < 50){
		this->height = 50;
	}else if(height > 250){
		this->height = 250;
	}else{
		this->height = height;
	}
}
void BMI::setWeight(float weight){
	if(weight < 30){
		this->weight = 30;
	}else if(weight > 200){
		this->weight = 200;
	}else{
		this->weight = weight;
	}
}

BMI::BMI(float weight, float height){
	setWeight(weight);
	setHeight(height);
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
	BMI bmi1(210, 270);
	cout << "bmi1的身高是" << bmi1.getHeight() << endl;
	cout << "bmi1的體重是" << bmi1.getWeight() << endl;
}
