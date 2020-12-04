#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	float top,bottom,height,area;
	printf("請輸入梯形的上底(公分):");
	cin >> top;

	printf("請輸入梯形的下底(公分):");
	cin >> bottom;

	printf("請輸入梯形的高(公分):");
	cin >> height;

	area = (top + bottom) * height / 2;

	printf("梯形的面積:%.2f平方公分\n",area);
	return 0;
}
