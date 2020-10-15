#include <iostream>
using namespace std;

int main() {
	string defaultPassword = "5678";
	string password;
	printf("請輸入密碼:");
	cin >> password;
	while(password != defaultPassword){
			printf("請輸入密碼:");
			cin >> password;
	}

	printf("恭喜!你的密碼正確了!請進");

}
