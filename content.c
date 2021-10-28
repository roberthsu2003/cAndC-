main.cpp

#include "bmi.h"
int main() {
	BMI::begin();
	BMI user1("robert",175,80);
	cout << "name=" << user1.name << endl;
	cout << "height=" << user1.height << endl;
	cout << "weight=" << user1.weight << endl;
	user1.suggestion();
	cout << "=====================" << endl;
	BMI user2("alice");
	cout << "name=" << user2.name << endl;
	cout << "height=" << user2.height << endl;
	cout << "weight=" << user2.weight << endl;
	user2.suggestion();
	return 0;
} 


bmi.h
#ifndef __BMI_H__
#define __BMI_H__

#include <iostream>
#include "time.h"
using namespace std;

class BMI{
	public:
		BMI(string n);
		BMI(string n, int h, int w);
		string name;
		int height;
		int weight;
		static void begin(){
			srandom(time(NULL));
		}
		
		float bmi();
		void suggestion();

};

#endif

bmi.cpp

#include "bmi.h"

BMI::BMI(string n){
	name = n;
	height = rand() % (180-150+1) + 150;
	weight = rand() % (90-55+1) + 55;
}

BMI::BMI(string n, int h, int w){
	name = n;
	height = h;
	weight = w;
}

float BMI::bmi(){
	return weight / ((height / 100.0) * (height / 100.0));
}

void BMI::suggestion(){
	string message;
	float bmiValue = bmi();
	if(bmiValue < 18.5){
		message = "體重過輕";
	}else if(bmiValue < 24){
		message = "正常範圍";
	}else if(bmiValue < 27){
		message = "過重";
	}else if(bmiValue < 30){
		message="輕度肥胖";
	}else if(bmiValue < 35){
		message="中度肥胖";
	}else{
		message="重度肥胖";
	}
	cout << "BMI:" << bmiValue << endl;
	cout << "醫生建議:" << message << endl;
}

