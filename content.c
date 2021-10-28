main.cpp

#include <iostream>
#include "bmi.h"

void getNormal(BMI b,int *t){
	if(b.bmi() >= 18.5 && b.bmi() < 24){
		*t += 1;
	}
}

int main() {
	int total = 0;
	BMI::begin();
	BMI students[50];
	for(int i=0; i<50; i++){
		students[i] = BMI("stu"+to_string(i+1));
		cout << students[i].name << endl;
		cout << students[i].height << endl;
		cout << students[i].weight << endl;
		students[i].suggestion();
		cout << "======================" << endl;
		getNormal(students[i], &total);
	}

	cout << "全班正常範圍的人數是:" << total << endl;
	
} 

bmi.h
#ifndef __BMI_H__
#define __BMI_H__

#include <iostream>
#include "time.h"
using namespace std;

class BMI{
	public:
		BMI();
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

BMI::BMI(){
	
}

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

