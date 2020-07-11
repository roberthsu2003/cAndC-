#include <iostream>
using namespace std;

//函式原型
float temperature(int);

int main() {
	int value;
	float result=0.0;
	string runAgain;
	cout << "攝氏10度轉萃氏溫度=" <<  temperature(10) << endl;
	cout << "===================\n";
	do{
		cout << "請輸入攝氏溫度:";
		cin >> value;
		result = temperature(value);
		cout << "華氏溫度=" << result << endl;
		cout << "程式還要繼續嗎?(輸入N....結束)";
		cin >> runAgain;
	}while(runAgain != "N");
	cout << "程式結束";	
	return 0;
}

float temperature(int value){
	return 1.8 * value + 32;
}
