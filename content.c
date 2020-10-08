#include <iostream>
using namespace std;

int main() {
	float in1, in2, in3, max;
	string q1 = "請輸入第一個數:";
	cout << q1;
	scanf("%f", &in1);

	printf("請輸入第二個數:");
	scanf("%f", &in2);

	max = in1 > in2 ? in1 : in2;

	printf("請輸入第三個數:");
	scanf("%f", &in3);

	max = max > in3 ? max : in3;

	printf("輸入三個數中最大的數為:%.2f\n",max);
}
