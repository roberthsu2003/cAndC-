//============================================================================
// Name        : protClass1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person{
	public:
		int tall;
		string name;
		void walk(int);
};

void Person::walk(int var){
			cout << name << "每小時可跑" << var << " 公里" << endl;
}

int main() {
	Person david;
	david.tall = 183;
	david.name = "David";
	cout << david.name << " 身高=" << david.tall << endl;
	david.walk(20);

	cout << "==============================\n";

	Person robert;
	david.tall = 180;
	david.name = "Robert";
	cout << david.name << " 身高=" << david.tall << endl;
	david.walk(15);
	return 0;
}
