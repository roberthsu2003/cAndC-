#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	char op;
	int num1 = 20, num2 = 4;
	printf("num1=20,num2=4\n");
	printf("請輸入要執行的運算(+-*/):");
	scanf("%c", &op);
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
