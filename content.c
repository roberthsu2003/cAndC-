#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	unsigned int seed = (unsigned int)time(NULL);
	srand(seed);
	for(int i=0; i<5; i++){
			cout << rand() << endl;
	}
	
	int r = 90 + rand() % (100+1-90);
	cout << r;

	return 0;
}
