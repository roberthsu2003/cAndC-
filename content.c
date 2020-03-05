#include <iostream>
using namespace std;

int main() {
	int nums = 5;
	int scores[nums];
	int sum=0;

	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "位學生的成績";
		cin >> scores[i];
		sum += scores[i];
	}

	cout << "所有學生的分數是:";
	for (int i=0; i<nums; i++){
		cout << scores[i] << "\t";
	}
	cout << endl;
	cout << "全班總成績為:" << sum << "分,平均為" << (float)sum / nums << "分\n";
}
