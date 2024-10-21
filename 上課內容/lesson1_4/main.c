#include <stdio.h>

int main(void) {
  //如何使用printf()輸出數值
  printf("這是整數:%d\n", 15);
  printf("這是有小數點的數值(double):%lf\n", 9.9999);
  printf("這是加法運算,5+5=%d\n", 5 + 5);
  printf("這是加法運算,5.0+10.0:%.2lf\n", 5.0 + 10.0);
  return 0;
}
