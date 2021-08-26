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

