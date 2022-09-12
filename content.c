#include <stdio.h>

int main(void) {
	int bottom;
	int height;
	
	printf("請輸入三角形的底(cm):");
	scanf("%d",&bottom);
	printf("請輸入三角形的高(cm):");
	scanf("%d",&height);

	printf("3角形的面積是%.2f\n", bottom * height / 2.0);
  return 0;
}
