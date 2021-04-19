#include <iostream>
#define nums 5
using namespace std;
int main() {
	int scores[nums];
	int sum = 0;
	double ave;
	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "位學生的成績";
		cin >> scores[i];
	}

	for(int i=0; i<nums; i++){
		sum += scores[i];
	}

	ave = (float)sum / nums;

	printf("全班總成績為:%d分,平均為%.2f分",sum, ave);
}
