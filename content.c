main.cpp

#include <iostream>
#include "bmi.h"

int main() {
	BMI stu1("Robert",178, 78);
	cout << stu1.name << endl;
	
} 

bmi.h

#include <iostream>
using namespace std;

class BMI{
	public:
	//建立欄位
	string name;
	int height;
	int weight;
	//建構式
	BMI(string name,int height,int weight){
		this -> name = name;
		this -> height = height;
		this -> weight = weight;
	}

};
