#include <iostream>
#include "person.h"
using namespace std;

int main() {
	Person p1;
	p1.name="robert";
	p1.height = 175;

	Person p2;
	p2.name = "david";
	p2.height = 180;

	cout << "p1的名字是:" << p1.name << endl;
	cout << "p1的高是:" << p1.height << endl;
	p1.walk(15);

	cout << "p2的名字是:" << p2.name << endl;
	cout << "p2的高是:" << p2.height << endl;
	p2.walk(20);
}


person.h

#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
using namespace std;

class Person{
	public:
		string name;
		int height;
		void walk(int var){
			cout << name << "每小時可跑" << var << "公里" << endl;
		}
};

#endif

