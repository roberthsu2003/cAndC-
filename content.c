//請使用者輸入一個任意數，程式會顯示此數的平方值及立方值
#include <iostream>

int main() {
	float num,result;
	printf("請輸入任意數");
	scanf("%f",&num);
	result = num;
	result *= num;
	printf("此數的平方是:%.2f\n", result);
	result *= num;
	printf("此數的立方是:%.2f\n", result);
	return 0;
}
