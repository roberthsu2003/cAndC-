#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
string password;
//cout << "請輸入密碼:";
printf("請輸入密碼:");
cin >> password;
//雙向選擇
if(password == "1234"){
	cout << "密碼正確!歡迎光臨";
}else{
	cout << "密碼錯誤!\n請重新輸入\n";
}

}
