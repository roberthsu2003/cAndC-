#include <iostream>
using namespace std;

int main() {
	int chinese;
	int english;
	int math;

	cout << "請輸入國文分數:";
	cin >> chinese;

	cout << "請輸入英文分數:";
	cin >> english;

	cout << "請輸入數學分數:";
	cin >> math;

	cout << "學生總分為:" << chinese + english + math;
  	return 0;
}
