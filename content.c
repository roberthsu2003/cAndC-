#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int score;
	cout << "請輸入國文分數:";
	cin >>	score;
	sum += score;

	cout << "請輸入數學分數:";
	cin >>	score;
	sum += score;

	cout << "請輸入英文分數:";
	cin >>	score;
	sum += score;

	cout << "三科總分為:" << sum << endl;
}
