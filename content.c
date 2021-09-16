#include <stdio.h>

int main(void) {
  int myInt = 56;
  float myFloat = 67.98;
  double myDouble = 879.12345;
  char myChar = 'z';
  const char* myName = "Robert";

  printf("我的整數是%d\n",myInt);
  printf("我的float是%.2f\n",myFloat);
  printf("我的double是%.5f\n",myDouble);
  printf("我的字元:%c\n", myChar);
  printf("我的字串是%s\n", myName);
  return 0;
}
