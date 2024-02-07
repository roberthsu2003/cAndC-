#include <stdio.h>

int main(void) {
  int n = 10;	
	printf("n轉換為double是%.2lf\n",(double)n); //強制轉換型別
	printf("n=%d\n",n);

	double m = 10.5;	
	printf("m轉換為整數%d\n",(int)m); //強制轉換型別
	printf("m=%.2lf\n",m);
  return 0;
}
