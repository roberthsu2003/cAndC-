#include <iostream>
using namespace std;
int main() {
	char op;
	int num1 = 20, num2 = 4;
	cout << "num1=20, num2=4\n";
	cout << "請輸入您要執行的運算(+-*/):";
	cin >> op;

	switch(op){
		case '+':
		cout << "num1+num2=" << num1+num2 << endl;
		break;

		case '-':
		cout << "num1-num2=" << num1-num2 << endl;
		break;

		case '*':
		cout << "num1*num2=" << num1*num2 << endl;
		break;

		case '/':
		cout << "num1/num2=" << num1/num2 << endl;
		break;

		default:
		cout << "無法執行運算!\n";
	}
	
}
