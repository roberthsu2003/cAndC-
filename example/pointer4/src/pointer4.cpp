//============================================================================
// Name        : pointer4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int *p;
	p = &n;
	cout << "n=" << n << endl;
	cout << "&n=" << &n << endl;
	cout << "p=" << p << endl;
	cout << "*p=" << *p << endl;
	cout << "*&n=" << *&n << endl;
	return 0;
}
