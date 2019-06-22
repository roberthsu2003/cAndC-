//============================================================================
// Name        : calculate.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//讓使用者輸入加、減、乘、除運算子, 就會顯示運算結果
	char op;
	int first = 20, second = 4;
	cout << "first=20, second=4\n";
	cout << "請輸入要執行的運算(+-*/):";
	cin >> op;
	switch (op){
		case '+':
			cout << "first + second = " << first + second << "\n";
			break;
		case '-':
			cout << "first - second = " << first - second << "\n";
			break;
		case '*':
			cout << "first * second = " << first * second << "\n";
			break;
		case '/':
			cout << "first / second = " << first / second << "\n";
			break;
		default:
			break;

	}
	return 0;
}
