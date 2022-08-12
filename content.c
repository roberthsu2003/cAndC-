#include <iostream>
#include "person.h"

using namespace std;


int main() {
  Person p1("robert",183, 78);  
  cout << p1.name() << endl;
	cout << "體重是" << p1.weight() << endl;
	cout << "身高是" << p1.height() << endl;
	cout << "bmi:" << p1.bmi() << endl;

	Person p2("john",178, 97);  
  cout << p2.name() << endl;
	cout << "體重是" << p2.weight() << endl;
	cout << "身高是" << p2.height() << endl;
	cout << "bmi:" << p2.bmi() << endl;
}





#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
using namespace std;

class Person {
private:
  string _name; //instance field
	int _weight;
	int _height;

public:  
	Person(string name,int height, int weight);
	string name(); //instance method

	/*
	weight就是傳出體重
	*/
	int weight();

	int height();
	double bmi();
};


#endif




#include "person.h"

Person::Person(string name,int height, int weight){ //Person的建構式
		_name = name;
		_height = height;
		_weight = weight;
}


string Person::name() { 
	return _name; 
}

int Person::weight(){
		return _weight;
	}

int Person::height(){
	return _height;
}

double Person::bmi(){		
	return _weight / ((_height/100.0) * (_height/100.0));
}
