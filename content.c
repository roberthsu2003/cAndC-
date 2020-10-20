//建立一個包含五個元素的整數陣列，讓使用者輸入五位學生的成績，然後計算班級總成績及平均成績
#include <iostream>

int main() {
	int nums = 5;
	int scores[nums];
	int sum = 0;
	double ave;
	for(int i=0; i<nums; i++){
		printf("請輸入第%i位學生的成績",i+1);
		scanf("%i", &scores[i]);
	}

	for(int i=0; i<nums; i++){
		sum += scores[i];
	}

	ave = (double)sum / nums;
	printf("全班總成績為:%i分,平均為%.2f分\n",sum, ave);
}
