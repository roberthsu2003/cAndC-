#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	string password;
	do{
		cout << "請輸入密碼:";
		cin >> password;
	}while(password != "5678");
	cout << "恭喜!你的密碼正確了!請進";
	return 0;
}
