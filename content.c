#include <iostream>
using namespace std;

int main() {
	string password;
	do{
		cout << "請輸入密碼:";
		cin >> password;
	}while(password != "1234");	

	cout << "恭喜!你的密碼正確了!請進";
}
