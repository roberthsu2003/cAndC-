//============================================================================
// Name        : password2.cpp
//讓使用者輸入密碼,如果輸入的密碼正確(1234), 要顯示「密碼正確!歡迎光臨!」。如果不正確就顯示密碼錯誤訊息
#include <iostream>
using namespace std;

int main() {
	string pass;
	cout << "請輸入密碼:";
	cin >> pass;
	if (pass == "1234"){
		cout << "歡迎光臨!\n";
	}else{
		cout << "密碼錯誤!\n";
		cout << "請重新輸入!\n";
	}
	return 0;
}
