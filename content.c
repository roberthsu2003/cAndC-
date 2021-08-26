#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int lot[49];
	int num = 7;
	int maxIndex = 48;
	int choose[num];
	for(int i=0; i<49; i+=1){
		lot[i] = i+1;
	}
	srand(time(NULL));
	for(int i=0; i<num; i+=1){
		int randIndex = rand() % (maxIndex+1);
		choose[i] = lot[randIndex];
		lot[randIndex] = lot[maxIndex];
		maxIndex -= 1;
	}

	for(int i=0; i<num; i++){
		cout << choose[i] << endl;
	}
	return 0;
}
