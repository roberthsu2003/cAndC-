//建立一個包含五個元素的整數陣列，讓使用者輸入五位學生的成績，然後計算班級總成績及平均成績
#include <iostream>
using namespace std;

int main() {
	const int nums = 5;
	unsigned short scores[nums];
	int sum=0;
	float ave;
	for(int i=0; i<nums; i++){
		printf("請輸入第%d位學生的成績:",i+1);
		scanf("%hd",&scores[i]);
	}

	for(int i=0; i<nums; i++){
		sum += scores[i];
	}
	ave = (float)sum / nums;
	printf("全班成績為:%d分,平均為%.2f分\n",sum,ave);

}
