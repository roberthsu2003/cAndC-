//============================================================================
// Name        : Pointer2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n[3] = {1, 2, 3};
	cout << "陣列n的位址=" << n << endl;
	cout << "陣列n[0]的位址=" << &n[0] << endl;
	cout << "陣列n[1]的位址=" << &n[1] << endl;
	cout << "陣列n[2]的位址=" << &n[2] << endl;
	return 0;
}
