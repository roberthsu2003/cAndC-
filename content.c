#include <stdio.h>

int main(void) {
  double PI = 3.14159787;
  int radius = 9;
  printf("圓面積:%.2f\n",radius * radius * PI); //自動轉換型別
  return 0;
}
