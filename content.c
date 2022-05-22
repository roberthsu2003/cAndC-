#include <iostream>
using namespace std;

float temperature(int value){
	return value * 1.8 + 32;
}

int main() {
	int fvalue;
  	float result = temperature(10); 
	cout << "攝氏10度轉換為華氏為:" << result << endl;
	cout << "請輸入攝氏溫度:";
	cin >> fvalue;
	result = temperature(fvalue);
	cout << "攝氏溫度:" << fvalue << " 華氏溫度為:" << result << endl;
	return 0;
}
