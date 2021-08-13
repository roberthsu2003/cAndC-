#include <iostream>
using namespace std;
int main() {
	int scores[5];
	int sum = 0;
	float ave;

	for(int i=0; i<5; i+=1){
		cout << "請輸入第" << i+1 << "位學生的成績";
		cin >> scores[i];
	}

	for(int i=0; i<5; i+=1){
		sum += scores[i];
	}

	ave = sum / 5.0;

	cout << "全班總成績為:" << sum << "分,平均為" << ave << "分\n";
	return 0;

}
