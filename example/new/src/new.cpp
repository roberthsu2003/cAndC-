//============================================================================
// Name        : new.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	int *p = &n;
	*p = 10;
	cout << *p;

	int *m = new int(10);
	cout << *m;
	return 0;
}
