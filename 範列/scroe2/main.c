#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int nums = 5;
    int scores[nums];
    int sum=0;
    double ave;
    for(int i=0; i<nums; i++){
        printf("請輸入第%d位學生的成績",i+1);
        scanf("%d",&scores[i]);
    }

    for(int i=0; i<nums; i++){
		sum += scores[i];
	}

	ave = (double)sum / nums;
    printf("全班總成績為:%d分,平均為%.2f分\n",sum, ave);
  return 0;
}
