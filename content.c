main.cpp

#include <iostream>
#include "person.h"

using namespace std;


int main() {
	Person p1;
	p1.name = "David";
	p1.tall = 183;
	cout << "p1的name是" << p1.name << endl;
	cout << "p1的身高是" << p1.tall << endl;


	Person p2;
	p2.name = "Robert";
	p2.tall = 178;
	cout << "p2的name是" << p2.name << endl;
	cout << "p2的身高是" << p2.tall << endl;
	return 0;
}

person.h

#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
using namespace std;
class Person{
	public:
	string name;
	int tall;
};

#endif
