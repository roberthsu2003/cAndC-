#include <stdio.h>

int main(void) {
  char name[20];
  printf("請輸入姓名:");
  scanf("%s", name);
  printf("您的姓名是:%s\n", name);
  return 0;
}
