#include <iostream>
//範例:請讓使用者輸入三科成績後，自動計算其總分及平均
using namespace std;
int main() {
	unsigned short chinese=0, english=0, math=0;
	cout << "請輸入國文成績(0~100):";
	cin >> chinese;

	cout << "請輸入英文成績(0~100):";
	cin >> english;

	cout << "請輸入數學成績(0~100):";
	cin >> math;

	int sum = chinese + english + math;
	//float average = (float)sum / 3;
	float average = sum / 3.0;
	cout << "您的總為為:" << sum << "分,平均為" << average << "分\n";
}
