#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	float in1,in2,in3,max;

	printf("請輸入第一個數:");
	cin >> in1;

	printf("請輸入第二個數:");
	cin >> in2;

	max = in1 > in2 ? in1 : in2;

	printf("請輸入第三個數:");
	cin >> in3;

	max = max > in3 ? max : in3;

	printf("輸入三個數中最大的數為:%.2f\n", max);
}
