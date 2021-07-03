#include <iostream>
#include "people.h"

using namespace std;
int main() {
	People p1("Robert", true, 250, 300);	
	cout << p1.getName() << endl;
	cout << p1.getHeight() << endl;
	cout << p1.getWeight() << endl;
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

	People(string n, bool s, int h, int w){
		name = n;
		man = s;
		setHeight(h);	
		setWeight(w);
	}

	//name getter,setter
	string getName(){
		return name;
	}

	//height getter,setter
	int getHeight(){
		return height;
	}

	void setHeight(int h){
		if(h<100){
			height = 100;
		}else if(h>230){
			height = 230;
		}else{
			height = h;
		}
	}

	//weight getter,setter
	int getWeight(){
		return weight;
	}

	void setWeight(int w){
		if(w < 30){
			weight = 30;
		}else if (w > 250){
			weight = 250;
		}else{
			weight = w;
		}
	}
};

#endif
