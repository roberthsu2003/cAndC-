#include <iostream>
using namespace std;

int main() {
	int chinese,math,english;
	int sum=0;
	cout << "請輸入國文成績:";
	cin >> chinese;

	cout << "請輸入數學成績:";
	cin >> math;

	cout << "請輸入英文成績:";
	cin >> english;	

	cout << "您的國文,英文,數學成績是" << chinese << ",";
	cout << english << ",";
	cout << math << endl;

	sum = chinese + english + math;

	cout << "您的總分是" << sum << endl;
	cout << "您的平均是" << sum / 3.0 << endl;
	
}
