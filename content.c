#include <stdio.h>

int main(void) {
	int x,y,total;
	printf("請輸入x的值:");
	scanf("%d",&x);

	printf("請輸入y的值:");
	scanf("%d",&y);

	total = x + y;

	printf("%d+%d=%d\n",x,y,total);
	return 0;
}
