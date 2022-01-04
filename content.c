#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srandom(time(NULL));
	int scores[50][5];
	for(int i=0;i<50;i++){
		for(int j=0;j<5;j++){
			scores[i][j] = random() % 100;
			cout << scores[i][j] << "\t";
		}
		cout << endl;
	}


} 
