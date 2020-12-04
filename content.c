#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	float num,result;
	printf("請輸入任意數:");
	cin >> num;
	result = num;
	result *= num;
	printf("此數的平方是%.2f\n",result);
	result *= num;
	printf("此數的立方是%.2f\n",result);
	return 0;
}
