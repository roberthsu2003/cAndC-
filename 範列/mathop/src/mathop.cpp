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
	/*
	int n=0,m=0;
	cout << "請輸入被除數(整數):";
	cin >> n;
	cout << "請輸入除數(整數，不可以為0)";
	cin >> m;

	cout << "商:" << n/m << ",餘數:" << n%m << endl;
	*/

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
