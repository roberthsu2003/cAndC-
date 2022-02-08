#include <stdio.h>

int main(void) {
  unsigned char chinese = 78;
  unsigned char english = 97;
  unsigned char math = 85;
  printf("\'國文分數\':%d\t\"英文分數\":%d\t數學分數:%d\n",chinese,english,math);

  unsigned short sum;
  sum = chinese + english + math;
  printf("3科總分是%d\n", sum);

  float average;
  average = sum / 3.0;

  printf("平均為:%f\n", average);
  return 0;
}
