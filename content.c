#include <iostream>
using namespace std;

float temperature(int value){
	return 1.8 * value + 32;
}

int main() {
	int inputValue;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> inputValue;
	result = temperature(inputValue);
	cout << "華氏溫度=" << result;
	return 0;
}
