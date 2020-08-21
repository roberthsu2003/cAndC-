//範例:請讓使用者輸入三科成績後，自動計算其總分及平均

	
#include <iostream>
using namespace std;

int main() {
	unsigned short chinese =0, english = 0, math =0;
	int sum=0;
	float average=0;

	cout << "請輸入國文成績(0~100):";
	cin >> chinese;

	cout << "請輸入英文成績(0~100):";
	cin >> english;

	cout << "請輸入數學成績(0~100):";
	cin >> math;

	sum = chinese + english + math;
	average = (float)sum / 3;
	printf("您的總分為:%d分,平均為%.2f分\n", sum,average);
}
