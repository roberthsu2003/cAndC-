#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));	
	int scoresNum = 250;
	int scores[scoresNum];
	for(int i=0; i<scoresNum; i++){
		scores[i] = rand() % (100-60+1) + 60;
		cout << scores[i] << endl;
	}
	
}
