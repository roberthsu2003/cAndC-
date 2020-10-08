//讓使用者輸入密碼,如果輸入的密碼正確(1234), 要顯示「密碼正確!歡迎光臨!」。
//如果不正確就顯示密碼錯誤訊息
#include <iostream>
#include <string.h>
//using namespace std;

int main() {
	char password[20];
	printf("請輸入密碼:");
	scanf("%s", password);

	if(strcmp(password, "1234")){
		//true程式區塊
		printf("歡迎光臨!\n");
	}else{
		//false程式區塊
		printf("密碼錯誤!\n");
		printf("請重新輸入!\n");
	}
}
