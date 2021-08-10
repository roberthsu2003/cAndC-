#include <iostream>
using namespace std;

int main() {
	int chinese, english, math;
	int sum;
	float average;

	cout << "請輸入中文分數:";
	cin >> chinese;
	cout << "請輸入英文分數:";
	cin >> english;
	cout << "請輸入數學分數:";
	cin >> math;

	sum = chinese + english + math;
	average = (float)sum / 3;
	cout << "您的總分為:" << sum << "分,平均為" << average << "分\n";
	return 0;
}
