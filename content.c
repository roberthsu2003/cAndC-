#include <iostream>
//讓使用者輸入加、減、乘、除運算子, 就會顯示運算結果
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
		cout << "無法執行運算!\n";
		
	}
}
