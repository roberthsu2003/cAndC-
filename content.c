#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int max = 99;
	int min = 1;
	srandom(time(NULL));
	int randomValue = random() % (max-min+1) + min;
	cout << randomValue << endl;
} 
