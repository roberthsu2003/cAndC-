#include <iostream>
using namespace std;

int main() {
	int sum=0;
	int scores;
	int num;
	cout << "請輸入學生的人數:";
	cin >> num;
	for(int i=1; i<=num; i++){
		cout << "請輸入第" << i << "位學生的總分:";
		cin >> scores;
		sum += scores;
	}
	cout << "全班總共有" << num << "學生,總分為" << sum << endl;
}
