//============================================================================
// Name        : const.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//preprocessor
#define PI 3.14

int main() {
	//const
	const double Tax_1 = 0.06, Tax_2 = 0.13;

	cout << "PI是" << PI << endl;
	cout << "Tax_1=" << Tax_1 << ",Tax_2=" << Tax_2 << endl;
	return 0;
}
