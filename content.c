#include <stdio.h>

int main(void) {
  const int NUMS = 5;
  int scores[NUMS];
  int sum = 0;
  double ave;
  for(int i=0; i< NUMS; i++){
	  printf("請輸入第%d位學生的成績",i+1);
	  scanf("%d",&scores[i]);
  }

  for(int i=0;i < NUMS; i++){
	  sum += scores[i];
  }

  ave = (double)sum / NUMS;
  printf("全班總成績為:%d分,平均為%.2f分\n",sum,ave);
  return 0;
}
