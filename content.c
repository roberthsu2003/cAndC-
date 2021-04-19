#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	int num = 7;
	int lot[49];
	int choose[num];
	int maxIndex = 48;

	for(int i=0; i<=maxIndex; i++){
		lot[i] = i+1;
	}

	srand(time(NULL));

	for(int i=0; i<num; i++){
		int randIndex = rand() % (maxIndex+1);
		choose[i] = lot[randIndex];
		lot[randIndex] = lot[maxIndex];
		maxIndex--;
	}

	cout << "本期大樂透電腦選號號碼如下:\n\n";

	for(int i=0; i<num-1; i++){
		cout << choose[i] << " ";
	}
	cout << "\n\n特別號:" << choose[num-1] << "\n\n";
}
