#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main() {
	int i = 47;
	printf("%x\n",i);
	printf("%X\n",i);
	printf("%#x\n",i);
	printf("%#X\n",i);

	int a =0, b =0, c=0, d=0;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("a+b=%d\n", a+b);
	scanf("%d %d", &c, &d);
	printf("c*d=%d", c*d);
}
