//============================================================================
// Name        : function2.cpp
//輸入攝氏溫度，求華氏溫度
//function 的原型宣告
#include <iostream>
using namespace std;

float temperature(int); //原型宣告

int main() {
	cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
	cout << "----------------\n";
	int value;
	float result;
	string runAgain;
	do{
		cout << "請輸入攝氏溫度:";
		cin >> value;
		result = temperature(value);
		cout << "華氏溫度=" << result << endl;
		cout << "程式還要繼續嗎?(輸入N...結束):";
		cin >> runAgain;
	} while(runAgain != "N");
	cout << "程式結束";
	return 0;
}

float temperature(int value){
	return 1.8 * value + 32;
}
