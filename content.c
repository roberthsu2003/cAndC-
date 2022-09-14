#include <iostream>
using namespace std;

int main() {
	int chinese,english,math;
	int sum;
	cout << "請輸入國文成績:";
	cin >> chinese;
	cout << "請輸入英文成績:";
	cin >> english;
	cout << "請輸入數學成績:";
	cin >> math;

	sum = chinese + english + math;
	cout << "總分為:" << sum;
	printf(",平均為%.2f\n", sum/3.0);
	
}
