//============================================================================
// Name        : password2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

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
