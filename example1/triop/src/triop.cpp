//============================================================================
// Name        : triop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float in1, in2, in3, max;
	cout << "請輸入第一個數:";
	cin >> in1;

	cout << "請輸入第二個數:";
	cin >> in2;

	max = in1 > in2 ? in1 : in2;

	cout << "請輸入第三個數:";

	cin >> in3;

	max = max > in3 ? max : in3;

	cout << "輸入三個數中最大的數為:" << max << "\n";
	return 0;
}
