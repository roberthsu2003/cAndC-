#include <stdio.h>

int main(void) {
	int first;
	int second;
	int total;

  	printf("請輸入第一個數值:");
	scanf("%d",&first);
	printf("first變數的內容是%d\n",first);

	printf("請輸入第2個數值:");
	scanf("%d",&second);
	printf("second變數是內容是:%d\n",second);

	total = first * second;

	printf("%d * %d = %d\n",first,second,total);

  	return 0;
}
