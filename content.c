#include <iostream>

using namespace std;

int main() {
	unsigned int firstDay = 0, secondDay = 0, thirdDay = 0;
	cout << "請輸入第1天的支出:";
	cin >> firstDay;

	cout << "請輸入第2天的支出:";
	cin >> secondDay;

	cout << "請輸入第3天的支出:";
	cin >> thirdDay;

	int sum = firstDay + secondDay + thirdDay;
	float average = sum / 3.0;

	cout << "您的總支出為" << sum << "元, 平均每天支出" << average << "元";
}
