//讓使用者輸入加、減、乘、除運算子, 就會顯示運算結果
#include <iostream>

int main() {
	char op;
	int num1 = 20, num2 = 4;
	printf("num1=20,num2=4\n");
	printf("請輸入要執行的運算(+,-,*,/):");
	scanf("%c", &op);
	switch(op){
		case '+':
			printf("num1+num2=%i", num1 + num2);
			break;
		case '-':
			printf("num1-num2=%i", num1 - num2);
			break;
		case '*':
			printf("num1*num2=%i", num1 * num2);
			break;
		case '/':
			printf("num1/num2=%i", num1 / num2);
			break;
		default:
			printf("無法執行運算!\n");
	}
}
