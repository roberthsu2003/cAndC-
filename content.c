#include <iostream>
using namespace std;

int main() {
	const int nums = 5;
	int scores[nums];
	int sum = 0;
	float ave;

	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "位學生的成績:";
		cin >> scores[i];
	}

	for(int i=0; i<nums; i++){
		sum += scores[i];
	}
	ave = (float)sum / nums;
	cout << "全班總成績為:" << sum << "分,平均為" << ave << endl;
}
