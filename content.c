main.cpp

#include <iostream>
#include "person.h"


using namespace std;
int main() {
	string name;
	int weight,height;
	cout << "請輸入姓名:";
	cin >> name;

	cout << "請輸入身高:";
	cin >>	height;

	cout << "請輸入體重:";
	cin >> weight;
	
	Person p1(name, height, weight);
	cout << "name:" << p1.name << endl;
	cout << "bmi是:" << p1.bmi() << endl;
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
