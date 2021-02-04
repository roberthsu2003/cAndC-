#include <iostream>
#include "tools.h"
using namespace std;



int main() {
	int inputValue;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> inputValue;
	result = temperature(inputValue);
	cout << "華氏溫度=" << result;
	return 0;
}
