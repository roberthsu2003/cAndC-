main.cpp

#include <iostream>
#include "human.h"

using namespace std;
using namespace Human;

int main() {
	Person p1;
	p1.name = "David";
	p1.tall = 180;
	p1.walk(15);
	return 0;
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
		void walk(int var);
	};

	void Person::walk(int var){
		cout << name << "每小時可跑" << var << "公里" << endl;
	}
}

#endif
