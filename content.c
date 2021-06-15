#include <iostream>
using namespace std;

int main() {
	float num;
	float result=0;
	cout << "請輸入第一個數:";
	cin >> num;
	result += num;

	cout << "請輸入第二個數:";
	cin >> num;
	result += num;

	cout << "請輸入第三個數:";
	cin >> num;
	result += num;

	cout << "三個數的總和為:" << result << endl;
}
