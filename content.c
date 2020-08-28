//建立一個包含五個元素的整數陣列，讓使用者輸入五位學生的成績，然後計算班級總成績及平均成績

#include <iostream>
#define nums 5

using namespace std;

int main() {
	
	int scores[nums];
	int sum = 0;
	float ave;
	for(int i=0; i<nums; i++){
		cout << "請輸入第" << i+1 << "位學生的成績:";
		cin >> scores[i];
	}

	for(int i=0; i<nums; i++){
		printf("%d\n", scores[i]);
		sum += scores[i];
	}

	ave = (float)sum/nums;

	///cout << "全班總成績為:" << sum << "分,平均為" << ave << "分\n";
	printf("全班總成績為:%d分,平均為%.2f分",sum,ave);
	
}
