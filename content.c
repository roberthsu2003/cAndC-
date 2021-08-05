#include <iostream>
using namespace std;
int main() {
	int chinese,english,math,sum;
	float average;

	cout << "請輸入國文成績(0-100):";
	cin >> chinese;

	cout << "請輸入英文成績(0-100):";
	cin >> english;

	cout << "請輸入數學成績(0-100):";
	cin >> math;

	sum = chinese + english + math;
	//強制轉換
	average = (float)sum / 3;

	cout << "您的總分為:" << sum << "分";
	printf("平均為%.2f分\n", average);
	return 0;
}
