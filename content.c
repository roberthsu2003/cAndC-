#include <iostream>
#include <math.h>
#include "person.h"

using namespace std;



int main() {
	Person p1("徐國堂",179, 75);
	cout << "姓名:" << p1.name << endl;
	cout << "身高:" << p1.height << endl;
	cout << "體重:" << p1.weight << endl;
	cout << "BMI:" << p1.getBmi() << endl;
	p1.suggestion();

	Person p2("robert",170, 100);
	cout << "姓名:" << p2.name << endl;
	cout << "身高:" << p2.height << endl;
	cout << "體重:" << p2.weight << endl;
	cout << "BMI:" << p2.getBmi() << endl;
	p2.suggestion();
}


person.h


#include <iostream>
using namespace std;

class Person{
	public:
	string name;
	int height;
	int weight;
	Person(string name,int height, int weight){
		this -> name = name;
		this -> height = height;
		this -> weight = weight;
	}
	

	float getBmi(){
		return weight / pow((height/100.0),2);
	}

	void suggestion(){
		float bmi = getBmi();
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
		cout << "提醒:" << message << endl;
	}
};
