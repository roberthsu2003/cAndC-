main.cpp

#include <iostream>
#include "People.h"
using namespace std;


int main() {
	People p1;
	p1.name = "robert";
	p1.setHeight(-1);
	p1.setWeight(-1);
	cout << "p1的高是:" << p1.height() << endl;
	cout << "p1的體重是:" << p1.weight() << endl;
}

People.h

#ifndef _PEOPLE_H_
#define _PEOPLE_H_

#include <iostream>
using namespace std;

class People{
	private:
		int _height;
		int _weight;
	public:
		string name;
		int height();
		void setHeight(int h);
		int weight();
		void setWeight(int w);
		
};

#endif

People.cpp
#include "People.h"

int People::height(){
	return _height;
}

void People::setHeight(int h){
	if(h<100 || h>230){
		_height = 160;
	}else{
		_height = h;
	}
}

int People::weight(){
	return _weight;
}

void People::setWeight(int w){
	if(w<30 || w>200){
		_weight = 60;
	}else{
		_weight = w;
	}
}
