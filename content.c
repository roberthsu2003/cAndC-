#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {	
	srand(time(NULL));
	int length = 4;
	int scores[length];

	for(int i=0; i<length; i++){		
		scores[i] = (rand() % 100) + 1;
	}

	for(int i=0; i<length; i++){
		cout << scores[i] << " ";
	}

	cout << endl;
	return 0;
}
