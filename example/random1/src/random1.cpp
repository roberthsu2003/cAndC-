//============================================================================
// Name        : random1.cpp
//建立一個亂數

#include <iostream>
#include <time.h>
using namespace std;

int main() {
	unsigned int seed = (unsigned int)time(NULL);
	srand(seed);

	for(int i=0; i<5; i++)
		cout << 10 + rand()% (100-10+1) << endl;

	return 0;
}
