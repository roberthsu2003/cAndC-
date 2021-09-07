main.cpp

#include <iostream>
#include "person.h"

using namespace std;


int main() {
	Person p1;
	p1.name = "David";
	cout << "p1的name是" << p1.name << endl;
}


person.h

#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
using namespace std;
class Person{
	public:
	string name;
};

#endif

