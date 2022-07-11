#include <stdio.h>

int main(void) {
	int a;
	a = 10;
	printf("a=%d\n",a);
	//單行註解
	//現在要建立變數b
	int b;
	b = 123450;
	printf("b=%d\n",b);

	int c;
	c = a + b;
	printf("a+b=%d\n", c);
	
	c = a - b;
	printf("a-b=%d\n",c);

	c = a * b;
	printf("a*b=%d\n",c);

	c = b / a;
	printf("b/10=%d\n",c);
	
  return 0;
}
