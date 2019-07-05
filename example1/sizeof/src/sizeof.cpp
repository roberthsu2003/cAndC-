//============================================================================
// Name        : sizeof.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n[] = {1, 3, 5, 7, 9};
	int total = sizeof(n);
	int one = sizeof(n[0]);
	int count = total/one;
	cout << "陣列總記憶體空間大小:" << total << "bytes\n";
	cout << "每個陣列記憶體空間大小:" << one << "bytes\n";
	cout << "陣列元素個數:" << count << "\n\n";
	cout << "使用for迴圈顯示陣列\n";
	for(int i=0;i<count;i++){
		cout << "n[" << i << "]=" << n[i] << "\n";
	}
	return 0;
}
