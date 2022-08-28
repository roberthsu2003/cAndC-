#include <stdio.h>

int main(void) {
  unsigned char chinese, english, math;
  unsigned short sum;
  float average;
  printf("請輸入國文成績(0~100):");
  scanf("%hhu", &chinese);

  printf("請輸入英文成績(0~100):");
  scanf("%hhu", &english);

  printf("請輸入數學成績(0~100):");
  scanf("%hhu", &math);

  sum = chinese + english + math;
  //強制轉換
  average = (float)sum / 3;
  printf("您的總分為:%u分,平均為%.2f\n", sum, average);
  return 0;
}
