main.h

#include <iostream>
#include "tools.h"

People p1;
People p2;
using namespace std;

int main() {
	p1.name = "robert";
	p1.height = 170;
	p1.weight = 76;

	cout << p1.name << endl;
	cout << p1.height << endl;
	cout << p1.weight << endl;

	p2.name = "john";
	p2.height = 180;
	p2.weight = 80;

	cout << p2.name << endl;
	cout << p2.height << endl;
	cout << p2.weight << endl;
}

tools.h
#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <iostream>
using namespace std;

class People{
	public:
		string name;
		int height;
		int weight;
};


#endif
