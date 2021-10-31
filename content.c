#include <stdio.h>

int main(void) {
	int x = 1;
	int y = x++;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	return 0;
}
