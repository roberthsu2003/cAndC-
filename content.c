main.c

#include <iostream>
#include "tool.h"

using namespace std;



int main() {
	/*
	student david;
	david.name = "david";
	david.chinese = 80;
	david.english = 98;
	david.math = 68; 
	*/
	//建立一個結構變數
	student david = {"david",80,68,98};
	cout << david.name << endl;
	cout << david.chinese << endl;
	cout << david.math << endl;
	cout << david.english << endl;
}

tool.h
//定義一個結構
typedef struct student{
	const char *name;
	int chinese, math, english;
} student;
