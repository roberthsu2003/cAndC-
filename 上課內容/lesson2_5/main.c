#include <stdio.h>

int main(void) {
	int n=5;
  
	printf("n的值是%d\n",n);
	printf("n的記憶體位置是%p\n",&n);

	int m;
	printf("請輸入m變數的數值:");
	scanf("%d",&m);
	printf("您m變數的值是%d\n",m);
  return 0;
}
