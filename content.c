
//讓使用者輸入密碼,如果輸入的密碼正確(1234), 要顯示「密碼正確!歡迎光臨!」。如果不正確就顯示密碼錯誤訊息
#include <iostream>
using namespace std;

int main() {
	string password;
	cout << "請輸入密碼:";
	cin >> password;

	if(password=="a1234"){
		//true
		cout << "密碼正確" << endl;
	}else{
		//false
		cout << "密碼錯誤,請重新輸入" << endl;
	}

	cout << "程式結束" << endl;
} 
