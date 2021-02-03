#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void ltoGenerator(int n){
	int num = 7;
	int lot[49];
	int choose[num];
	int maxIndex = 48;

	for(int i=0; i<49; i++){
		lot[i] = i+1;
	}
	srand(time(NULL)+n);
	for(int i=0; i<num; i++){
		int randIndex = rand() % (maxIndex+1);
		choose[i] = lot[randIndex];
		lot[randIndex] = lot[maxIndex];
		maxIndex--;
	}
	
	
	
	for(int i=0; i<num-1; i++){
		cout << choose[i] << " ";
	}

	cout << "\n特別號:" << choose[num-1] << "\n\n";
}


int main() {
	int set;
	cout << "請輸入需要幾組大樂透號碼:";
	cin >> set;
	cout << "本期大樂透電腦選號號碼如下:\n\n";	
	for(int i=0; i<set; i++){
		ltoGenerator(i);
	}
	return 0;	
}
