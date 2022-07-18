#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int lot[49];
	int choose[7];
	int max_index = 48;
	for(int i=0; i<49; i++){
		lot[i] = i+1;
	}

	srandom(time(NULL));
	for(int i=0; i<7; i++){
		int randIndex = random() % (max_index+1);
		choose[i] = lot[randIndex];
		lot[randIndex] = lot[max_index];
		max_index -= 1;
	}

	cout << "本期大樂透電腦選號號碼如下:\n\n";
	for(int i=0; i<7;i++){
		cout << choose[i] << " ";
	}
	cout << endl;

	
}
