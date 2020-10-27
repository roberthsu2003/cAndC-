#include <iostream>
using namespace std;
//原型
float temperature(int);

int main() {
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
		if(runAgain == "N"){
			break;
		}

	}while(true);
	
	return 0;
}

float temperature(int value){
	return value * (9/5.0) + 32;
}
