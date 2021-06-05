#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	int guess;
	int min = 1;
	int max = 100;
	srand(time(NULL));
	guess = rand();
	cout << "亂數值是" << (guess % max)+min  << endl;
}
