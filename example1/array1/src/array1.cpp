//============================================================================
// Name        : array1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void showArray(int tempAry[],int count){

	for(int i=0;i<count;i++){
		cout << "Ary[" << i << "]=" << tempAry[i] << "\t";
	}
	cout << "\n-----------------------------------\n";
}

void sub2(int tempAry[],int count){

	for(int i=0;i<count;i++){
			tempAry[i] *= 2;
	}
}

int main() {
	int ary[] = {2, 3, 4};
	int count = sizeof(ary) / sizeof(ary[0]);
	cout << "1.一維陣列傳參考" << endl;
	showArray(ary,count);

	cout << "2.一維陣列傳參考, 將內容*2" << endl;
	sub2(ary,count);

	cout << "3.一維陣列傳參考*2後的內容" << endl;
	showArray(ary,count);
	return 0;
}
