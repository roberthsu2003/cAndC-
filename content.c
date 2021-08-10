#include <iostream>
using namespace std;

int main() {
	int chinese;
	int math;
	cout << "請輸入國文分數:";
	cin >> chinese;
	cout << "請輸入數學分數:";
	cin >> math;
	cout << "您的國文分數是" << chinese << endl;
	cout << "您的數學分數是" << math << endl;
	cout << "您的總分是" << chinese + math << endl;
	return 0;
}
