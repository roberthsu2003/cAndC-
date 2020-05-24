#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned long)time(NULL));
	std::cout << rand() % 100 + 1;
}
