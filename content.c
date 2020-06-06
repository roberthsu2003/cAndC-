#include <iostream>
using namespace std;

int main() {
	unsigned char chinese, english, math;
	
	cout << "請輸入國文成績(0~100):";
	cin >> chinese;


	cout << "請輸入英文成績(0~100):";
	cin >> english;

	cout << "請輸入數學成績(0~100):";
	cin >> math;

	int sum = chinese + english + math;
	float average = sum / 3;
	cout << "您的總分為:" << sum << "分,平均為" << average << "分\n";
	

}
