#include <iostream>
using namespace std;

int main() {
	srandom(time(NULL));
	int nums = 7;
	int loto[49];
	int choose[nums];
	int minIndex = 0;
	int maxIndex = 49-1;
	for(int i=0; i<49; i++){
		loto[i] = i+1;
	}


	for(int i=0; i<nums; i++){
		int randomIndex = random() % (maxIndex - minIndex - 1) + minIndex;
		choose[i] = loto[randomIndex];
		loto[randomIndex] = loto[maxIndex];
		maxIndex--;
	}

	for(int i=0;i<nums;i++){
		cout << choose[i] << " ";
	}




}
