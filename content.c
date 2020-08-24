/*
成績及格判斷
請使用者輸入成績，若成績大於等於60分，則顯示及格，否則顯示不及格。
*/
#include <iostream>
using namespace std;

int main() {
	unsigned short score;
	cout << "請輸入您的成績:";
	cin >> score;
	if(score >= 60){
		cout << "及格!\n";
	}else{
		cout << "不及格!\n";
	}
	cout << "程式結束\n";
}






//讓使用者輸入密碼,如果輸入的密碼正確(1234), 要顯示「密碼正確!歡迎光臨!」。如果不正確就不做任何事

#include <iostream>
using namespace std;

int main() {
	string password;
	cout << "請輸入密碼:";
	cin >> password;

	if(password == "1234"){
		cout << "密碼正確!歡迎光臨!" << endl;
	}else{
		cout << "密碼錯誤!請重新輸入" << endl;
	}
	cout << "程式結束\n";
}
