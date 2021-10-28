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


