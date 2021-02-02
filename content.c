#include <iostream>
using namespace std;

int main() {
	const int nums = 5;
	int scores[nums];
	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "位學生的成績:";
		cin >> scores[i];
	}
}
