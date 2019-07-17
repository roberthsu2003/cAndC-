//============================================================================
// Name        : protClass1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//定義class
class Person{
	public:
	int tall;
	string name;
	void walk(int);

};

void Person::walk(int var){
		cout << name << "每小時可跑" << var << "公里" << endl;
}




int main() {
	Person david;
	david.tall = 180;
	david.name = "David";
	cout << david.name << " 身高=" << david.tall << endl ;
	david.walk(15);


	Person robert;
	robert.tall = 183;
	robert.name = "Robert";
	cout << robert.name << " 身高=" << robert.tall << endl;
	robert.walk(20);
	return 0;
}
