/*
成績及格判斷
請使用者輸入成績，若成績大於等於60分，則顯示及格，否則顯示不及格。

顯示:
請輸入成績:78
及格!(不及格!)
*/

#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "請輸入成績:";
	cin >> score;
	cout << "分數:" << score << endl;	
	if(score >= 60){		
		cout << "及格!\n";
	}else{
		cout << "不及格\n";
	}
	return 0;
} 
