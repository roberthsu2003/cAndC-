#include <iostream>
#include <time.h>
using namespace std;
int main() {
	int max = 49;
	int min = 1;
	int loto[7];
	srandom(time(NULL));	
	for(int i=0; i<7; i++){
		//i = 0~6
		loto[i] = random() % (max-min+1) + min;
	}

	cout << "本期大樂透電腦選號號碼如下:\n\n";
	for(int i=0; i<7; i++){
		cout << loto[i] << "\t";
	}
	cout << endl;	
	
}
