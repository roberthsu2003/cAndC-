#include <stdio.h>

int main(void) {
  int chinese;
  int english;
  int math;
  int sum;

  printf("請輸入國文成績:"); //提示使用者輸入
  scanf("%d",&chinese); //接收使用者輸入的值

  printf("請輸入英文成績:"); //提示使用者輸入
  scanf("%d",&english); //接收使用者輸入的值

  printf("請輸入數學成績:"); //提示使用者輸入
  scanf("%d",&math); //接收使用者輸入的值

  sum = chinese + english + math;

  printf("國文成績是%d\n",chinese);
  printf("英文成績是%d\n",english);
  printf("數學成績是%d\n",math);
  printf("===================\n");
  printf("總分是%d\n",sum);
  return 0;
}
