//範例:請讓使用者輸入三科成績後，自動計算其總分及平均
#include <iostream>
using namespace std;

int main() {
	unsigned short chinese, english, math;
	int sum;
	float average;

	cout << "請輸入國文成績(0~100):";
	cin >> chinese;
	cout << "請輸入英文成績(0~100):";
	cin >> english;
	cout << "請輸入數文成績(0~100):";
	cin >> math;
	
	sum = chinese + english + math;
	average = (float)sum / 3;
	//c++語言
	cout << "您的總分為:" << sum << "分, 平均為" << average << "分\n";
	//c語言
	printf("您的總分為:%i分, 平均為%.2f分\n",sum,average);
}
