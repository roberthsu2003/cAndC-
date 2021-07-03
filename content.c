#include <iostream>
#include "people.h"

using namespace std;

int main() {
	People p1("Robert", true, 183, 78);	
	cout << p1.getName() << endl;
	cout << p1.getHeight() << endl;
	cout << p1.getWeight() << endl;
	p1.infomation();
}


People.h
#ifndef __PEOPLE__
#define __PEOPLE__

#include <iostream>
using namespace std;

class People{
	private:
	string name;
	int height;
	int weight;

	public:	
	bool man;
	
	//建構式
	People(){		
	}

	People(string n, bool s, int h, int w);
	

	//name getter,setter
	string getName();

	//height getter,setter
	int getHeight();

	void setHeight(int h);

	//weight getter,setter
	int getWeight();

	void setWeight(int w);

	//bmi method
	void infomation();
};

#endif



people.cpp

#include "people.h"

People::People(string n, bool s, int h, int w){
		name = n;
		man = s;
		setHeight(h);	
		setWeight(w);
	}

string People::getName(){
		return name;
}

	//height getter,setter
int People::getHeight(){
	return height;
}

void People::setHeight(int h){
	if(h<100){
		height = 100;
	}else if(h>230){
		height = 230;
	}else{
		height = h;
	}
}

int People::getWeight(){
	return weight;
}

void People::setWeight(int w){
	if(w < 30){
		weight = 30;
	}else if (w > 250){
		weight = 250;
	}else{
		weight = w;
	}
}

void People::infomation(){
	float bmi = weight/((height/100.0) * (height/100.0));
	cout << "bmi=" << bmi << endl;
	if(bmi < 18.5){
		cout << "體重過輕" << endl;			
	}else if(bmi < 24){
		cout << "正常範圍" << endl;
	}else{
		cout << "異常範圍" << endl;
	}
}
