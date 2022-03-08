main.cpp

#include <iostream>
#include "weather.h"
using namespace std;

int main(){
	onefunc();
	return 0;
}


weather.h
#include <iostream>
using namespace std;

float temperature(int value){
     return 1.8 * value + 32;
}

void onefunc(){
	int cValue;
	float fValue;
	cout << "請輸入攝氏溫度:";
	cin >> 	cValue;
	fValue = temperature(cValue);
	cout << "華氏溫度=" << fValue << endl;
}
