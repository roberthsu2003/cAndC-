#include <stdio.h>

int main(void) {
	int n,m;
  	printf("請輸入被除數(整數):");
	scanf("%d",&n);

	printf("請輸入除數(整數,不可以為零):");
	scanf("%d",&m);

	printf("商:%d,餘數:%d\n", n/m, n%m);
  return 0;
}
