main.cpp
#include <iostream>
#include "tool.h"

using namespace std;



int main() {
	

	student stus[] = {
		{"david",80,68,98},
		{"robert",80,68,98},
		{"john",80,64,98}
	};

	cout << stus[0].name << endl;
	cout << stus[1].name << endl;
	cout << stus[2].name << endl;

}

tool.h
//定義一個結構
typedef struct student{
	const char *name;
	int chinese, math, english;
} student;
