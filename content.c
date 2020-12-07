#include <stdio.h>

int main() {
	int a=0, b=0, c=0, d=0;
	printf("請輸入a的內容:");
	scanf("%d",&a);
	printf("a=%d\n", a);

	printf("請輸入b的內容:");
	scanf("%d",&b);
	printf("b=%d\n", b);

	printf("請輸入c和d的內容(c,d)");
	scanf("%d,%d", &c, &d);

	printf("c=%d\n", c);
	printf("d=%d\n", d);
}
