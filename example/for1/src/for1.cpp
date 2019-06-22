//============================================================================
// Name        : for1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//計算2 - 10所有偶數的總和
	int sum=0;
	for (int i=2; i<=10; i+=2){
		sum += i;

		cout << "第" << i/2 << " 次迴圈的i = " << i << ",總和為 " << sum << "\n";
	}
	return 0;
}
