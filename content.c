#include <stdio.h>
#define PI 3.14159

float area(int r){
	return PI * r * r;
}

int main(void) {
	int radius;
	float are;
	printf("請輸入半徑");
	scanf("%i", &radius);
	are = area(radius);
	printf("面積是:%.2f\n", are);
  return 0;
}
