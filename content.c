#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//char* password;
	string password;
	cin >> password;
	
	if(password=="1234"){
		cout << "密碼正確，歡迎光臨";
	}else{
		cout << "密碼錯誤!\n";
		cout << "請重新輸入\n" ;
	}
	
	return 0;
}
