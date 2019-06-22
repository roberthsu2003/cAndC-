//============================================================================
// Name        : password.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//讓使用者輸入密碼,如果輸入的密碼正確(1234)，會顯示「歡迎光臨」, 如果輸入的密碼錯誤，不不會顯示歡迎訊息
	string password;
	cout << "請輸入密碼:";
	cin >> password;
	if(password == "1234"){
		cout << "歡迎光臨" << endl;
	}

	return 0;
}
