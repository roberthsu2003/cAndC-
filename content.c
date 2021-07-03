#include <iostream>
#include "people.h"

using namespace std;
int main() {
	People p1("Robert", true, 172, 72);	
	cout << p1.name << endl;
}


People.h
#ifndef __PEOPLE__
#define __PEOPLE__

#include <iostream>
using namespace std;

class People{
	public:
	string name;
	bool man;
	int height;
	int weight;
	//建構式
	People(){		
	}

	People(string n, bool s, int h, int w){
		name = n;
		man = s;
		height = h;
		weight = w;
	}
};

#endif

