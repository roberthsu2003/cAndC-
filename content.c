#include <iostream>
using namespace std;

int main() {
	float inputValue;
	float sum = 0;
	cout << "請輸入第1個數值:";
	cin >> inputValue;
	sum += inputValue;

	cout << "請輸入第2個數值:";
	cin >> inputValue;
	sum += inputValue;

	cout << "請輸入第3個數值:";
	cin >> inputValue;
	sum += inputValue;

	cout << "sum=" << sum << endl;
} 
