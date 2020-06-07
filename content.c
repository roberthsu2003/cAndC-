#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}

int main() {
	int n;
	unsigned long long int total;
	printf("請輸入數字n:");
	scanf("%d", &n);
	total = factorial(n);
	printf("%d! = %lld",n,total);
	return 0;
}
