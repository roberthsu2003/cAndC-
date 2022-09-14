#include <iostream>
using namespace std;
int main() {
	int chinese, english, math;
	cout << "請輸入國文,英文,數學的分數:(分數和分數之間空1格):";
	cin >> chinese >> english >> math;
	cout << "國文成績是" << chinese << endl;
	cout << "英文成績是" << english << endl;
	cout << "數學成績是" << math << endl;
	int sum = chinese + english + math;
	double average = sum / 3.0;
	cout << "您的總分為:" << sum << "分,平均為" << average << "分\n";
}
