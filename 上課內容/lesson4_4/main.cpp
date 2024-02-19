#include <iostream>
using namespace std;
int main() {
	int score;
	cout << "請輸入學生總分:";
	cin >> score;
	if(score>=80){ //多項選擇
		cout << "優" << endl;
	}else if(score>=60){ //巢狀判斷
			cout << "甲" << endl;
	}else{
			cout << "不及格" << endl;
	}
	
}
