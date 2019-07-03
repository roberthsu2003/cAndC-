//============================================================================
// Name        : dowhile2.cpp
//預設的密碼為5678，使用者若輸入的密碼錯誤，將不斷出現輸入密碼訊息，直到輸入的密碼正確才顯示正確訊息

#include <iostream>
using namespace std;

int main() {
	string password;
	do{
		cout << "請輸入密碼:";
		cin >> password;
	}while(password != "5678");
	cout << "恭喜!你的密碼正確了!請進";
	return 0;
}
