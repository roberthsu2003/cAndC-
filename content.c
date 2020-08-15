#include <iostream>
#include "myFunction.h"
using namespace std;



int main() {
	cout << "攝氏10度轉華氏溫度=" << temperature(10) << endl;
	cout << "----------------------------\n";
	char runAgain='N';
	do{
		int value;
		float result;
		cout << "請輸入攝氏溫度:";
		cin >> value;
		result = temperature(value);
		cout << "華氏溫度=" << result << endl;
		cout << "程式還要繼續嗎?(輸入N...結束):";
		cin >> runAgain;
	}while(runAgain != 'N');
	
	return 0;
}

