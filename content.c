#include <iostream>
using namespace std;

float temperature(int value){
     return 1.8 * value + 32;
}

int main(){
	int cValue;
	float fValue;
	cout << "請輸入攝氏溫度:";
	cin >> 	cValue;
	fValue = temperature(cValue);
	cout << "華氏溫度=" << fValue << endl;
	return 0;
}
