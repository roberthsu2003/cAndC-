#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a=0, b=0, c=0, d=0;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("a+b=%d\n",a+b);
	printf("c d=");
	scanf("%d %d", &c, &d);
	printf("c*d=%d\n",c*d);
	return 0;
}
