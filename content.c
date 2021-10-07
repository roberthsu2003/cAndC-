#include <iostream>
using namespace std;

int main() {
	const int nums=5;
	int sum = 0;
	float average;
	int scores[nums];

	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "位學生的成績";
		cin >> scores[i];
	}

	for(int i=0; i<nums; i++){
		cout << "第" << i+1 << "學生的分數是:" << scores[i] << endl;
		sum += scores[i];
	}

	average = (float)sum / nums;
	cout << "全班總成績為:" << sum << "分,平均為" << average << "分\n";

	return 0;
}
