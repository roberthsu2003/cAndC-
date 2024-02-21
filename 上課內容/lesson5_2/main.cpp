#include <iostream>
using namespace std;
//讓使用者輸入加、減、乘、除運算子, 就會顯示運算結果
//num1=20,num2=4
//請輸入要執行的運算(+ - * /):+
//num1+num2=24
int main() {
	int num1 = 20;
	int num2 = 4;
	char op;
	cout << "請輸入要執行的運算(+-*/):";
	cin >> op;

	switch(op){
		case '+':
		cout << num1 << "+" << num2 << "=" << num1+num2 << endl;
		break;

		case '-':
		cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
		break;

		case '*':
		cout << num1 << "*" << num2 << "=" << num1*num2 << endl;
		break;

		case '/':
		cout << num1 << "/" << num2 << "=" << num1/num2 << endl;
		break;

		default:
		cout << "無法運算\n";
	}
}
