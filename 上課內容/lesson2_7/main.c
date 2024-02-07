#include <stdio.h>

int main(void) {
	//錯誤的,不可以把大的給小的
  short n;
	int m = 100000;
	n = m;
	printf("n=%d\n",n);

	float PI = 3.14159;
	printf("PI=%f\n", PI);
  return 0;
}
