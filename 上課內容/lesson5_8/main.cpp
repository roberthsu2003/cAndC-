#include <iostream>
using namespace std;
//小美是一位教師，請你以while迴圈方式為小美設計一個輸入成績的程式，如果輸入-1表示成績輸入結束，如果輸入-2...,不做任何動作,在輸入成績結束後顯示班上總成績及平均成績。

int main() {
	int score;
	int sum = 0;
	int num = 0;
	while(true){
		cout << "請輸入第"<< num + 1 << "位學生分數:";
		cin >> score;
		if(score == -1){
			break;
		}else if(score < -1){
			continue;
		}
		sum += score;
		num += 1;
	}
	cout << "全班總成績為:" << sum << "平均分數為" << sum / (double)num << endl;
}
