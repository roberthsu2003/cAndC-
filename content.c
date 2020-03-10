#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int maxIndex = 48;
	int lot[49];
	for(int i=0; i<49; i++){
		lot[i] = i+1;
	}
	srand(time(NULL));
	for(int i=0; i<7; i++){
		cout<< lot[rand()%(maxIndex+1)] << endl;
	}
	
	
}
