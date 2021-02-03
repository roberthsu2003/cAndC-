#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int num = 7;
	int lot[49];
	int choose[8];

	for(int i=0; i<49; i++){
		lot[i] = i+1;
	}

	srand(time(NULL));
	for(int i=0; i < num; i++){
		cout << (rand() % 49) + 1 << endl;
	}
	
}
