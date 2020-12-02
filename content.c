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

	cout << "請輸入數學成績(0~100):";
	cin >> math;

	sum = chinese + english + math;
	//average = (float)sum / 3;
	//average = (float)(sum/3);
	average = sum / 3.0;

	printf("您的總分為:%d分,平均為%.2f分",sum, average);
}
