//============================================================================
// Name        : complex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float num, result;
	cout << "請輸入任意數:";
	cin >> num;
	result = num;
	result *= num;
	cout << "此數的平方是:" << result << "\n";
	result *= num;
	cout << "此數的立方是:" << result << "\n";
	return 0;
}
