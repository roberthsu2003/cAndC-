//============================================================================
// Name        : caculate.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char op;
	int num1 = 20, num2 = 4;
	cout << "num1=20,num2=4\n";
	cout << "請輸入要執行的運算(+-*/):";
	cin >> op;
	switch(op){
	case '+':
		cout << "num1+num2=" << num1+num2 << "\n";
		break;
	case '-':
			cout << "num1-num2=" << num1-num2 << "\n";
			break;
	case '*':
			cout << "num1*num2=" << num1*num2 << "\n";
			break;
	case '/':
			cout << "num1/num2=" << num1/num2 << "\n";
			break;
	default:
		cout << "無法執行運算\n";
	}
	return 0;
}
