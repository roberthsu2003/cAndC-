#include <iostream>
#include <time.h>
using namespace std;

void getLots(){
	int num = 7;
   	int choose[num];
   	int lot[49];
	int maxIndex = 48;
	
	for(int i=0; i<49; i++){
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
	for(int i=0; i<num; i++){
		cout << choose[i] << " ";
	}

	cout << "\n\n特別號:" << choose[num-1] << "\n\n";
}

int main() {
	int nums;
   	cout << "請輸入電腦選號的組數:";
	cin >> nums;
	for(int i=1; i<=nums; i++){
		cout << "第" << i << "組號碼是:" << endl;
		getLots();
		cout << "\n\n";
	}
}
