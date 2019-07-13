//============================================================================
// Name        : pointer6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n=10;
	int m= 20;
	int *p;
	p=&n;
	cout << "變數n的值=" << n << endl;
	cout << "指標變數p指向的記憶體位址=" << p << endl;
	cout << "*p的值" << *p << endl;

	p=&m;
	cout << "變數m的值=" << m << endl;
	cout << "指標變數p指向的記憶體位址=" << p << endl;
	cout << "*p的值" << *p << endl;

	return 0;
}
