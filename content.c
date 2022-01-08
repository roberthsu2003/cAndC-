#include <iostream>
using namespace std;

int main() {
	string password;	
	do{
		cout << "請輸入密碼:";
		cin >> password;
	}while (password != "1234");
	cout << "密碼正確";
} 
