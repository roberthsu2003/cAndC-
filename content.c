main.cpp

#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	cout << "100+200=" << add(100,200) << endl;
	return 0;
}

tools.h
#ifndef _TOOLS_H_
#define _TOOLS_H_
//定義function的原型
int add(int,int);
#endif

tools.cpp
int add(int a,int b){
	return a+b;
}
