main.cpp

#include <iostream>
#include "person.h"
#include "person.h"

int main() {
	Person p1("robert", 170, 70);	
	cout << "bmi:" << p1.bmi() << endl;
}



person.h

#ifndef __PERSON_H__
#define __PERSON_H__

#include <cmath>
#include <iostream>
using namespace std;

class Person {
public:
  string name;
  int height;
  int weight;
	//自訂的建構式
  Person(string n,int h, int w){
	  name = n;
	  height = h;
	  weight = w;
  }

  double bmi() { 
	  return weight / pow(height / 100.0, 2); 
  }
};
#endif
