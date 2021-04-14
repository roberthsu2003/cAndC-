#include <iostream>
using namespace std;

int main() {
	string password;
	do{
		cout << "請輸入密碼:";
		cin >> password;
		if(password == "1234"){
			break;
		}
	}while(true);	

	cout << "恭喜!你的密碼正確了!請進";
}
