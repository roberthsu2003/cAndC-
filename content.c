#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
	int max = 99;
	int min = 1;
	long guess = random() % (max-min+1) + min;
	cout << guess << endl;
}
