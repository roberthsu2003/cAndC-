#include <stdio.h>

int main(void) {
  int first,second;
  printf("請輸入第一個數值:");
  scanf("%d",&first);
  printf("請輸入第二個數值:");
  scanf("%d",&second);
  printf("%d+%d=%d\n",first,second,first + second);
  return 0;
}
