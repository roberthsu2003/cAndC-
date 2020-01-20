#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char op;
	int num1 = 20, num2 = 4;
	cout << "num1=20, num2=4";
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
			cout << "無法執行運算!\n";
		
	}
	return 0;
}
