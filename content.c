//預設的密碼為5678，使用者若輸入的密碼錯誤，將不斷出現輸入密碼訊息，直到輸入的密碼正確才顯示正確訊息

#include <iostream>
using namespace std;

int main() {
	string defaultPassword = "5678";
	string password;
	
	do{
		printf("請輸入密碼:");
		cin >> password;
	}while(password != defaultPassword);

	printf("恭喜!你的密碼正確了!請進");

}
