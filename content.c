#include <iostream>
/*
成績及格判斷
請使用者輸入成績，若成績大於等於60分，則顯示及格，否則顯示不及格。
*/
using namespace std;

int main() {
	int score;
	cout << "請輸入成績:";
	cin >> score;
	if(score >= 60){
		cout << "及格!" << endl;
	}else{
		cout << "不及格!" << endl;
	}
}
