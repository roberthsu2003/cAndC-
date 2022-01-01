#include <iostream>
using namespace std;

int main() {
	char op;
	int num1 = 20;
	int num2 = 4;
	int result;
	cout << "請輸入要執行的運算(+-*/):";
	cin >> op;
	switch(op){
		case '+':
		result = num1 + num2;
		cout << "結果是" << result << endl;
		break;

		case '-':
		result = num1 - num2;
		cout << "結果是" << result << endl;
		break;


		case '*':
		result = num1 * num2;
		cout << "結果是" << result << endl;
		break;

		case '/':
		result = num1 / num2;
		cout << "結果是" << result << endl;
		break;

		default:
			cout << "無法執行運算!\n";

	}
} 
