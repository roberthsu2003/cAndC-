#include <stdio.h>

int main(void) {
  int chinese, english, math;
  int sum;
  printf("請輸入國文成績:");
  scanf("%d",&chinese);

  printf("請輸入英文成績:");
  scanf("%d",&english);

  printf("請輸入數學成績:");
  scanf("%d",&math);

  sum = chinese + english + math;
  printf("3科總分是%d",sum);
  //強制轉換為float
  printf("3科平均是%.2f\n",(float)sum/3);

  return 0;
}
