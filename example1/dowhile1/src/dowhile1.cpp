//============================================================================
// Name        : dowhile1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//預設的密碼為5678，使用者若輸入的密碼錯誤，將不斷出現輸入密碼訊息，直到輸入的密碼正確才顯示正確訊息
#include <iostream>
using namespace std;

int main() {
	string password;
	do{
		cout << "請輸入密碼:";
		cin >> password;
	}while(password != "1234");
	cout << "恭喜!密碼正確!\n";
	return 0;
}
