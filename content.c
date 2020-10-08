#include <iostream>

int main() {
	float top, bottom, height, area;
	printf("請輸入梯形的上底(公分):");
	scanf("%f", &top);

	printf("請輸入梯形的下底(公分):");
	scanf("%f", &bottom);

	printf("請輸入梯形的高(公分):");
	scanf("%f", &height);

	area = (top + bottom) * height / 2;
	printf("梯形的面積:%.2f", area);
}
