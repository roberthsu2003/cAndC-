#include <iostream>
using namespace std;

int main() {
	int chinese, english, math;
	int sum;
	
	cout << "請輸入國文成績:";
	cin >> chinese;

	

	cout << "請輸入英文成績:";
	cin >> english;

	

	cout << "請輸入數學成績:";
	cin >> math;

	sum = chinese + english + math;
	
	cout << "3科總分是" << sum << endl;
	//cout << "3科平均是" << sum/3.0 << endl;
	printf("3科平均是%.2f\n", sum/3.0);
	return 0;
} 
