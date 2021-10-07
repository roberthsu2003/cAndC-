#include <iostream>
using namespace std;

int main() {
	const int nums=5;
	int scores[nums];
	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "位學生的成績";
		cin >> scores[i];
	}

	for(int i=0; i<nums; i++){
		cout << "第" << i+1 << "學生的分數是:" << scores[i] << endl;
	}

	return 0;
}
