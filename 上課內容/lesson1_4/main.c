#include <stdio.h>

int main(void) {
	//建立n變數
	int n;
	n = 10;

	//建立m變數,同時給值
	double m;
	m = 5.0;


	printf("n變數內儲存的值是%d\n", n);
	printf("m變數內的值是%.1lf\n", m);
	printf("n + m 的值是%.1lf\n", n + m);
  return 0;
}
