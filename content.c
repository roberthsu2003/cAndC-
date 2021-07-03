#include <iostream>
#include "people.h"

using namespace std;
int main() {
	People p1("Robert", true, 172, 72);	
	cout << p1.getName() << endl;
}



People.h
#ifndef __PEOPLE__
#define __PEOPLE__

#include <iostream>
using namespace std;

class People{
	private:
	string name;

	public:	
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

	//getter,setter
	string getName(){
		return name;
	}
};

#endif

