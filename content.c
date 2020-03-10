#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int maxIndex = 48;
	int lot[49];
	int num = 7;
	int choose[num];

	for(int i=0; i<49; i++){
		lot[i] = i+1;
	}
	srand(time(NULL));
	for(int i=0; i<7; i++){
		int randIndex = rand()%(maxIndex+1);
		choose[i] = lot[randIndex];
		lot[randIndex] = lot[maxIndex];
		maxIndex--;
	}

	cout << "本期大樂透電腦選號號碼如下:\n\n";
	for(int i=0; i<num; i++){
		cout << choose[i] << " ";
	}

	cout << "\n\n特別號" << choose[6] << "\n\n";
	
	
}
