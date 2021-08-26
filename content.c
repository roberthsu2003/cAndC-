main.cpp

#include <iostream>
#include "lot.h"
using namespace std;



int main() {
	begin();
	int nums;
	cout << "請輸入要產生電腦選號的組數:";
	cin >> nums;
	for(int i=0; i<nums; i+=1){
		cout << "第" << i+1 << "組:";
		lot();
	}
	
}

lot.h

#include <iostream>
#include "time.h"

using namespace std;
//要執行lot()時,必需先執行一次begin()
void begin(){
	srand(time(NULL));
}

void lot(){
	
	int lot[49];
	int num = 7;
	int maxIndex = 48;
	int choose[num];
	for(int i=0; i<49; i+=1){
		lot[i] = i+1;
	}
	
	for(int i=0; i<num; i+=1){
		int randIndex = rand() % (maxIndex+1);
		choose[i] = lot[randIndex];
		lot[randIndex] = lot[maxIndex];
		maxIndex -= 1;
	}

	for(int i=0; i<num-1; i++){
		cout << choose[i] << " ";
	}
	cout << "特別號" << choose[num-1] << endl;
}
