#include <iostream>
using namespace std;
//讓使用者輸入三個任意數，程式會顯示三數中的最大數。

int main() {
	double input1, input2, input3, max;
	cout << "請輸入第一個數:";
	cin >> input1;

	cout << "請輸入第二個數:";
	cin >> input2;

	max = input1 > input2 ? input1 : input2;

	cout << "請輸入第三個數:";
	cin >> input3;

	max = max > input3 ? max : input3;	

	cout << "輸入三個數中最大的數為:" << max << endl;
}
