#include <iostream>
#include <time.h>

using namespace std;
int main() {
	int lot[49];
	int minIndex = 0;
	int maxIndex = 48;

	for(int i=0; i<49; i++){
		lot[i] = i+1;
	}

	
	srand(time(NULL));
	int randIndex = rand() % (maxIndex-minIndex+1) + minIndex;
	cout << randIndex << endl;
	return 0;
}
