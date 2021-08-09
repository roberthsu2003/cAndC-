#include <stdio.h>

int main(void) {
  int chinese = 96;
  int english = 75;  
  /*
  ============================
  int sum = chinese + english;
  ============================
  */
  //printf("您的國文:%d,英文是:%d,總分是:%d\n",chinese,english,chinese+english);
  //printf("您的國文:%d\n英文是:%d\n總分是:%d\n",chinese,english,chinese+english);
  printf("您的國文:%d\n",chinese);
  printf("你的英文是:%d\n",english);
  printf("總分是%d\n",chinese+english);
  return 0;
}
