#include <iostream>
using namespace std;
//讓使用者輸入密碼,如果輸入的密碼正確(1234), 要顯示「密碼正確!歡迎光臨!」。如果不正確就不做任何事
int main() {
	string password;
	cout << "請輸入密碼:";
	cin >> password;
	//單項選擇
	if (password == "1234"){
		//true的程式區塊
		cout << "密碼正確!歡迎光臨!" << endl;
	}else{
		//false程式區塊
		cout << "密碼錯誤!" << endl;
	}

}
