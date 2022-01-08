#include <iostream>
using namespace std;

int main() {
	char op;
	int num1 = 20, num2 = 4;
	cout << "請輸入要執行的運算(+-*/):";
	cin >> op;

	switch(op){
		case '+':
		cout << "num1+num2=" << num1 + num2 << endl;	
		break;

		case '-':
		cout << "num1-num2=" << num1 - num2 << endl;	
		break;

		case '*':
		cout << "num1*num2=" << num1 * num2 << endl;	
		break;

		case '/':
		cout << "num1/num2=" << num1 / num2 << endl;	
		break;

		default:
		cout << "輸入不正確的字元" << endl;

	}
} 
