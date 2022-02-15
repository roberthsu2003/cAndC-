#include <iostream>
using namespace std;

int main() {
	float value;
	float result = 0.0;
    cout << "請輸入第一個數:";
	cin >> value;
	result += value;

	cout << "請輸入第二個數:";
	cin >> value;
	result += value;

	cout << "請輸入第三個數:";
	cin >> value;
	result += value;

	cout << "三個數的總和為:" << result << endl;
}
