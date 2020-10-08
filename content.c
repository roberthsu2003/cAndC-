#include <iostream>

int main() {
	float result = 0;
	float num;
	printf("請輸入第一個數:");
	scanf("%f",&num);
	result += num;

	printf("請輸入第二個數:");
	scanf("%f",&num);
	result += num;

	printf("請輸入第三個數:");
	scanf("%f",&num);
	result += num;

	printf("三個數的總和為:%.2f\n", result);
}
