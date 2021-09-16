#include <stdio.h>

int main(void) {
  int first;
  int second;
  printf("請輸入第一個值:");
  scanf("%d", &first);
  printf("請輸入第二個值:");
  scanf("%d",&second);

  printf("您的第一個數值是%d\n",first);
  printf("您的第二個數值是%d\n",second);

  printf("2數相加是:%d\n",first + second);
  printf("2數相乘的結果:%d\n", first * second);
  return 0;
}
