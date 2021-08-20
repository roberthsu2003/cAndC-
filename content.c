main.cpp

#include <iostream>
#include "data.h"

using namespace std;

int main() {
	student david;
	david.name = "David";
	david.chinese = 78;
	david.english = 65;
	david.math = 98;

	cout << "學生姓名是:" << david.name << endl;
	cout << "國文分數是:" << david.chinese << endl;
	cout << "英文分數是:" << david.english << endl;
	cout << "數學分數是是:" << david.math << endl;
	return 0;
}


data.h

#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}student;
