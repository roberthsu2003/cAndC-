#include <iostream>
using namespace std;

int main() {
	int chinese,english,math;
	int sum;
	float average;
	cout << "請輸入國文成績:";
	cin >> chinese;

	cout << "請輸入英文成績:";
	cin >> english;

	cout << "請輸入數學成績:";
	cin >> math;

	sum = chinese + english + math;
	average = (float)sum / 3;

	cout << "總分是" << sum << "平均是" << average << endl;
