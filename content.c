#include <iostream>
using namespace std;

int main() {
	string password;
	cout << "請輸入密碼:";
	cin >> password;

	if(password == "1234"){
		cout << "密碼正確!歡迎光臨!" << endl;
	}else{
		cout << "密碼錯誤!\n";
		cout << "請重新輸入\n";
	}

	cout << "程式結束" << endl;
	return 0;
}
