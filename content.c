main.c

#include <stdio.h>
#include <stdlib.h>
#include "tools.h"

int main(void) {
	int n = 20;
	int m = 10;
	printf("n+m=%d\n\n",add(n, m));
	printf("n-m=%d\n",subtract(n, m));
	return 0;
}

tools.h
int add(int a, int b){
	return a + b;
}

int subtract(int a, int b){
	return a - b;
}

