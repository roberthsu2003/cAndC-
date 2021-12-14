#include <iostream>
using namespace std;
int main() {
	string password;
	cout << "請輸入密碼:";
	cin >> password;

	if(password == "1234"){
		//true的程式區塊
		cout << "歡迎光臨!\n";
	}else{
		//false的程式區塊
		cout << "密碼錯誤!\n";
		cout << "請重新輸入!\n";
	}

	return 0;
} 
