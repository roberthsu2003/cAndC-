main.cpp

#include "const.h"
#include <iostream>

using namespace std;
int main() { 
	cout << week1 << endl;
	cout << week2 << endl;
	cout << week3 << endl;
	cout << week4 << endl;
	cout << week5 << endl;
	cout << week6 << endl;
	cout << week7 << endl;

	cout << "3+4=" << add(3,4) << endl;
}

const.h

//可以定義
//#define
//function
//class
//結構
//例舉
#ifndef __CONST_H__
#define __CONST_H__

#define week1 1
#define week2 2
#define week3 3
#define week4 4
#define week5 5
#define week6 6
#define week7 7

int add(int a, int b){
	return a + b;
}

#endif
