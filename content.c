#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int value;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> value;
	result = temperature(value);
	cout << "華氏溫度=" << result << endl;
	return 0;
}



tools.h
float temperature(int);


tools.cpp
#include "tools.h"

float temperature(int value){
	return 1.8 * value + 32;
}
