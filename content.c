#include <stdio.h>

int main(void) {
	int chinese = 89;
	int english = 78;
	int math = 98;
	printf("國文分數是%d\n",chinese);
	printf("英文分數是%d\n",english);
	printf("數學分數是%d\n",math);
	printf("總分是%d\n",chinese+english+math);
	printf("平均是%.2f\n",(chinese+english+math)/3.0);
  return 0;
}
