#include <iostream>

int main() {
	int num,result;
	printf("請輸入一個數值:");
	scanf("%d",&num);
	result = num;
	result *= num;
	printf("%d的平方是%d\n",num, result);
	result *= num;
	printf("%d的立方是%d\n",num, result);
} 
