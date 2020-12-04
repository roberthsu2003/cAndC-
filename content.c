#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	string pass;
	printf("請輸入密碼:");
	cin >> pass;
	
	if(pass == "1234"){
		printf("歡迎光臨\n");
	}else{
		printf("密碼錯誤\n");
		printf("請重新輸入\n");
	}
	printf("程式結束\n");
	return 0;
}
