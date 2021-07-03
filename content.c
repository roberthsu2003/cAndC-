#include <iostream>
#include "people.h"

using namespace std;
int main() {
	People p1;
	p1.name="robert";
	p1.man = true;
	p1.height = 172;
	p1.weight = 70;
	cout << p1.name << endl;
}


people.h
#ifndef __PEOPLE__
#define __PEOPLE__

#include <iostream>

class People{
	public:
	std::string name;
	bool man;
	int height;
	int weight;
};

#endif
