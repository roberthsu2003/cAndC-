#include <iostream>
using namespace std;

//定義function
float temperature(int fvalue){
	/*
	float cvalue = 1.8 * fvalue + 32;
	return cvalue;
	*/
	return 1.8 * fvalue + 32;
}

int main() {
	int fvalue;
	float result;
	cout << "請輸入攝氏溫度:";
	cin >> fvalue;
	result = temperature(fvalue); //呼叫function
	cout << "華氏溫度=" << result << endl;
	return 0;
} 
