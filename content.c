main.cpp

#include <iostream>
#include "human.h"

using namespace std;

int main() {
	Human::Person p1;
	p1.name = "David";
	p1.tall = 180;
}




human.h

#ifndef _HUMAN_H_
#define _HUMAN_H_

#include <iostream>
using namespace std;

namespace Human{
	class Person{
		public:
		string name;
		int tall;
	}
}

#endif
