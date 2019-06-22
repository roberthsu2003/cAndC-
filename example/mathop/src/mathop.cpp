//============================================================================
// Name        : mathop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "請輸入被除數(整數):";
	cin >> a;
	cout << "請輸入除數(整數,不能為0):";
	cin >> b;
	cout << "商:" << a/b << ",餘數:" << a%b << "\n";

	//前置遞增
	int x = 1;
	int y = ++x;
	//x = x + 1;
	//y = x;
	cout << "x = " << x << " y = "  << y << endl;

	//後置遞增
	int m = 1;
	int n = m++;
	//n = m;
	//m = m + 1
	cout << "m = " << m << " n = "  << n << endl;
	return 0;
}
