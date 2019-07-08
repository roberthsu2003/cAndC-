//============================================================================
// Name        : function2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
float temperature(float);//函式宣告

int main() {
	cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
	cout << "=====================\n";
	float value;
	int result;
	cout << "請輸入攝氏溫度:";
	cin >> value;
	result = temperature(value);
	cout << "華氏溫度=" << result << endl;
	return 0;
}

float temperature(float value){
	return 1.8 * value + 32;
}
