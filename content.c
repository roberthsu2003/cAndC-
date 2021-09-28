#include <iostream>
using namespace std;

int main() {
	float result=0;
	float num;

	cout << "請輸入第一個數:";
	cin >> num;
	result += num;

	cout << "請輸入第二個數:";
	cin >> num;
	result += num;

	cout << "請輸入第三個數:";
	cin >> num;
	result += num;

	cout << "3數的總和是" << result << endl;
	return 0;

}
