#include <stdio.h>

int main(void) {
	int x,y,total;
	printf("請輸入x和y的值(x,y):");
	scanf("%d,%d",&x,&y);


	total = x + y;

	printf("%d+%d=%d\n",x,y,total);
	return 0;
}
