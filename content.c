#include <iostream>
using namespace std;

int main() {
	unsigned short chinese, english, math;
	int sum=0;
	float average = 0;

	cout << "請輸入國文成績(0~100):";
	cin >> chinese;
	cout << "請輸入英文成績(0~100):";
	cin >> english;
	cout << "請輸入數學成績(0~100):";
	cin >> math;
	
	sum = chinese + english + math;
	average = (float)sum / 3;
	//cout << "您的總分為:" << sum << "分,平均為" << average << "分\n";
	printf("您的總分為:%d分,平均為%.2f分\n",sum,average);

}
