//============================================================================
// Name        : function3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//定義function
float temperature(float value){
	return 1.8 * value + 32;
}

int main() {
	//引數值
	cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
	cout << "=======================\n";

	float inputValue;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> inputValue;
	result = temperature(inputValue);
	cout << "華氏溫度=" << result << endl;
	return 0;
}
