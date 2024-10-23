#include <stdio.h>

int main(void) {
  int top;
  printf("請輸入top的值:");
  scanf("%d",&top);
  printf("變數top的值:%d\n", top);
  printf("變數top的記憶體位址:%p\n", &top);

  int bottom;
  printf("請輸入bottom的值:");
  scanf("%d",&bottom);
  printf("變數bottom的值:%d\n", bottom);
  printf("變數bottom的記憶體位址:%p\n", &bottom);

  int height;
  printf("請輸入height的值:");
  scanf("%d",&height);
  printf("變數height的值:%d\n", height);
  printf("變數height的記憶體位址:%p\n", &height);
  return 0;
}
