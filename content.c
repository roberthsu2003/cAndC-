#include <iostream>
using namespace std;
int main() {
	string password;
	while(true){
		cout << "請輸入密碼:";
		cin >> password;
		if(password == "5678"){
			break;
		}
	}

	cout << "恭喜!您的密碼正確!請進" << endl;
}
