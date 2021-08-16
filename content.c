main.cpp

#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int cValue;
	float fValue;
	cout << "請輸入攝氏溫度:";
	cin >> cValue;
	fValue=temperature(cValue);
	cout << "華氏溫度=" << fValue << endl;
	return 0;
}

tools.h

float temperature(int value){
	return value * 1.8 + 32;
}
