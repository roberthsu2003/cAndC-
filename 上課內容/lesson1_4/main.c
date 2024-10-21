#include <stdio.h>

int main(void) {
  //如何使用printf()輸出數值
  printf("這是整數:%d\n", 15);
  printf("這是有小數點的數值(double):%lf\n", 9.9999);
  printf("這是加法運算,5+5=%d\n", 5 + 5);              //整數+整數
  printf("這是加法運算,5.0+10.0:%.2lf\n", 5.0 + 10.0); // double + double
  printf("這是加法運算5 + 10.0=%.2lf\n", 5 + 10.0);    // int + double
  printf("這是乘法5 * 38.976=%.4lf\n", 5 * 38.976);    // int * double
  printf("這是除法: 1/2 =%d\n",1/2); // int / int
  printf("這是除法: 1/2.0 = %.2lf\n",1/2.0); // int/double
  return 0;
}
