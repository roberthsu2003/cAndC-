//讓使用者輸入三個任意數，程式會顯示三數中的最大數。
#include <iostream>

int main() {
	float in1, in2, in3, max;
	printf("請輸入第一個數:");
	scanf("%f", &in1);

	printf("請輸入第二個數:");
	scanf("%f", &in2);

	max = in1 > in2 ? in1 : in2;

	printf("請輸入第三個數:");
	scanf("%f", &in3);

	max = max > in3 ? max : in3;

	printf("輸入三個數中最大的數為:%.2f\n",max);
}
