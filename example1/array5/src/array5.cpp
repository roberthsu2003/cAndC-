//============================================================================
// Name        : array5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void showAry(int *);
void sub2(int *);
int main() {
	int ary[] = {1, 2, 3};
	cout << "1ary陣列傳址:" << endl;
	showAry(ary);

	cout << "2ary陣列當參數，傳址後" << endl;
	sub2(ary);
	showAry(ary);
	return 0;
}

void showAry(int *tempAry){
	for(int i=0; i<= 2; i++){
		cout << "ary[" << i << "]=" << tempAry[i] << "\t";
	}
	cout << "\n--------------------------------------\n";

}

void sub2(int tempAry[]){
	for(int i=0; i<= 2; i++){
			tempAry[i] *= 2;
	}
}
