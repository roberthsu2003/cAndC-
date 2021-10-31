#include <stdio.h>

int main(void) {
  double PI = 3.14159876;
  int radius;
  double area;
  printf("請輸入整數半徑:");
  scanf("%d",&radius);
  //自動轉換型別
  area = PI * radius * radius;
  printf("圓面積=%.2f\n",area);
  return 0;
}
