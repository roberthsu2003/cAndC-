//============================================================================
// Name        : score1.cpp
//建立一個包含五個元素的整數陣列，讓使用者輸入五位學生的成績，然後計算班級總成績及平均成績
#include <iostream>
using namespace std;

int main() {
	const int nums = 5;
	int scores[nums];
	int sum=0;
	double ave;
	for(int i=0;i<nums;i++){
		cout << "請輸入第" << i+1 << "位學的成績";
		cin >> scores[i];
	}

	for(int i=0; i<nums; i++){
		sum += scores[i];
	}

	ave = (double)sum / nums;

	cout << "全班總成績為:" << sum << "分,平均為" << ave << "分\n";
	return 0;
}
