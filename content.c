#include <iostream>
//小美是一位教師，請你以while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績。
using namespace std;
int main() {
	int score = 0;
	int sum;
	while(score >= 0){
		cout << "請輸入學生的成績:";
		cin >> score;
		sum += score;
	}
	cout << "全班總成績為:" << sum << endl;
}
