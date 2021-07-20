#include <iostream>
#include "person.h"
using namespace std;

int main() {
	Person p1;
	bool m;
	int height;
	int weight;
	cout << "請輸入姓名:";
	cin >> p1.name;
	
	do{
		cout << "請輸入身高(cm):";
		cin >> height;
		m = p1.setHeight(height);
	}while(m == false);
	
	do{
		cout << "請輸入體重(kg):";
		cin >> weight;
		m = p1.setWeight(weight);
	}while(m == false);
	

	cout << p1.name << "您好:" << endl;
	printf("您的bmi是%.2f\n",p1.getBmi());
	p1.suggestion();
	
	
}


person.h

#include <iostream>
using namespace std;

class Person{
	private:
	int height;
	int weight;

	public:
	string name;
	bool setHeight(int h);
	bool setWeight(int w);
	

	Person(string name,int height, int weight);
	Person();

	float getBmi();
	void suggestion();
};


person.cpp

#include <math.h>
#include "person.h"

Person::Person(string name,int height, int weight){
		this -> name = name;
		this -> height = height;
		this -> weight = weight;
}

Person::Person(){
	
}

bool Person::setHeight(int h){
	if(h >= 250 || h <= 100){
		cout << "輸入的值超出範圍,請重新輸入" << endl;
		return false;
	}else{
		height = h;
		return true;
	}
}

bool Person::setWeight(int w){
	if(w >= 200 || w <= 30){
		cout << "輸入的值超出範圍,請重新輸入" << endl;
		return false;
	}else{
		weight = w;
		return true;
	}
}

float Person::getBmi(){
		return weight / pow((height/100.0),2);
}

void Person::suggestion(){
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
