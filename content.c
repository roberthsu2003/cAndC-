#include <stdio.h>

int main(void) {
  //計算圓面積
	double PI = 3.141592653;
	int radius;
	int area;
	printf("請輸入半徑:");
	scanf("%d",&radius);
	//數值型別的自動轉換
	area = radius * radius * PI;
	printf("圓面積=%d\n",area);
  return 0;
}
