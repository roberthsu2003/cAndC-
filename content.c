#include <iostream>
using namespace std;
int main() {
	int chinese,english,math,sum;
	float average;
	cout << "請輸入國文成績(0~100):";
	cin >> chinese;

	cout << "請輸入英文成績(0~100):";
	cin >> english;

	cout << "請輸入數學成績(0~100):";
	cin >> math;

	sum = chinese + english + math;
	//average = sum / 3.0; //自動轉換
	average = (float)sum / 3; //強制轉換
	cout << "您的總分為:" << sum << "分,平均為" << average << "分\n";
	return 0;
}
