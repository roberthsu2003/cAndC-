#include <stdio.h>

int main(void) {
  int chinese, math, english;
	int sum;
	double average;
	
  printf("請輸入國文成績:");
  scanf("%d", &chinese);

  printf("請輸入數學成績:");
  scanf("%d", &math);

  printf("請輸入英文成績:");
  scanf("%d", &english);

	sum = chinese + english + math;
	//average = (double)sum / 3; //強制轉換
	average = sum / 3.0;//自動轉換

	printf("國文,數學,英文成績是%d,%d,%d\n",chinese,math,english);
	printf("總分是%d\n", sum);
	printf("平均是%.2lf", average);
  return 0;
}
