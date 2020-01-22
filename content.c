#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float temperature(int);

int main() {
	int value;
	float result;
	cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
	cout << "------------------\n";
	cout << "請輸入攝氏溫度:";
	cin >> value;
	result = temperature(value);
	cout << "華氏溫度=" << result << endl;
	return 0;
}

float temperature(int value){
	return 1.8 * value + 32;
}
