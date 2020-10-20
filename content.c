#include <iostream>

int main() {	
	srand(time(NULL));
	int randNum = rand();
	printf("%i\n", randNum % 100 + 1);
}
