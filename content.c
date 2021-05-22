#include <stdio.h>

int main(void) {
  printf("請輸出各科的成績:\n");
  int math;
  math = 90;
  printf("math=%d\n",math);

  int chinese = 80;
  printf("chinese=%d\n", chinese);

  int english = 70;
  printf("english=%d\n", english);

  printf("數學=%d,國文=%d,英文=%d\n",math,chinese,english);

  return 0;
}
