#include <stdio.h>

int main(void) {
	int chinese;
	int english;
	int math;
	printf("請輸入國文分數:");
	scanf("%d",&chinese);
	printf("請輸入英文分數:");
	scanf("%d",&english);
	printf("請輸入數學分數:");
	scanf("%d",&math);
	printf("國文分數是%d\n",chinese);
	printf("英文分數是%d\n",english);
	printf("數學分數是%d\n",math);
	printf("總分是%d\n",chinese+english+math);
	printf("平均是%.2f\n",(chinese+english+math)/3.0);
  return 0;
}
