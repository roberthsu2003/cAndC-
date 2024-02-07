#include <stdio.h>

int main(void) {
  int chinese, math, english;
  printf("請輸入國文成績:");
  scanf("%d", &chinese);

  printf("請輸入數學成績:");
  scanf("%d", &math);

  printf("請輸入英文成績:");
  scanf("%d", &english);

	printf("%d,%d,%d\n",chinese,math,english);
  return 0;
}
