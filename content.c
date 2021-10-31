#include <stdio.h>
#define rate 27.83

int main(void) {
	//const float rate = 27.83;
	int us;
	printf("請輸入美金總數:");
	scanf("%d",&us);
	printf("可換成台幣%d\n", (int)(us * rate));
	return 0;
}
