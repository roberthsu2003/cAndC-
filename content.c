#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	printf("亂數值是%d\n", rand() % 100 + 1);
}
