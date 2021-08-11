#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "請輸入英文分數:";
	cin >> score;
	if(score >= 60){
		cout << "及格!" << endl;
	}else{
		cout << "不及格!" << endl;
	}
	cout << "程式結束";
	return 0;
}
