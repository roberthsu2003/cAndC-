#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	int guess;
	srand(time(NULL));
	guess = rand();
	cout << "亂數值是" << (guess % 10)+1  << endl;
}
