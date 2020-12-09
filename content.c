#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	long long int time1 = time(NULL);
	printf("%lld\n",time1);
	srand(time1);
	printf("亂數值是%d\n", rand() % 100 + 1);
}
