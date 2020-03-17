#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
	unsigned int seed = time(NULL);
	srand(seed);

	for(int i=0; i<5; i++){
		cout << 10 + rand() % (20+1-10) << endl;
	}
	return 0;
}
