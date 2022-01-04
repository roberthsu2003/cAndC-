#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srandom(time(NULL));
	int scores[50][5];
	for(int i=0;i<50;i++){
		int sum = 0;

		for(int j=0;j<5;j++){
			scores[i][j] = random() % 100;
			sum += scores[i][j];
			cout << scores[i][j] << "\t";
		}

		cout << sum << "\t";
		cout << sum / 5 << "\t";
		cout << endl;
	}


} 
