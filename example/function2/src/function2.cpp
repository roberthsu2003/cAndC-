//============================================================================
// Name        : function2.cpp
//輸入攝氏溫度，求華氏溫度
//function 的原型宣告
#include <iostream>
using namespace std;

float temperature(int);

int main() {
	cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
	cout << "----------------\n";
	int value;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> value;
	result = temperature(value);
	cout << "華氏溫度=" << result << endl;
	return 0;
}

float temperature(int value){
	return 1.8 * value + 32;
}
