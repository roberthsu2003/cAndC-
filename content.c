main.cpp

#include <iostream>
#include "bmi.h"

int main() {
	BMI stu1("Robert",178, 78);
	cout << stu1.name << endl;
	cout <<  "BMI是:" << stu1.getBMI() << endl;
	cout << "提醒:" << stu1.suggestion() << endl;

	BMI stu2("Alice",170, 49);
	cout << stu2.name << endl;
	cout <<  "BMI是:" << stu2.getBMI() << endl;
	cout << "提醒:" << stu2.suggestion() << endl;
} 

bmi.h

#include <iostream>
#include <math.h>
using namespace std;

class BMI{
	public:
	//建立欄位
	string name;
	int height;
	int weight;
	//建構式
	BMI(string,int,int);

	//實體方法,取得bmi
	float getBMI();

	//實體方法,提醒使用者
	string suggestion();
};


bmi.cpp
#include "bmi.h"

BMI::BMI(string name,int height,int weight){
		this -> name = name;
		this -> height = height;
		this -> weight = weight;
}

float BMI::getBMI(){
		return weight / pow(height/100.0,2);
}

string BMI::suggestion(){
		float bmi = getBMI();
		string message;

		if(bmi<18.5){
			message = "體重過輕";
		}else if(bmi < 24){
			message = "正常範圍";
		}else if(bmi < 27){
			message = "過重";
		}else if(bmi < 30){
			message = "輕度肥胖";
		}else if(bmi < 35){
			message = "中度肥胖";
		}else{
			message = "重度肥胖";
		}

		return message;
	}
