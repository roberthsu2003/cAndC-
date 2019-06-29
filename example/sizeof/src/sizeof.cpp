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
	int n[]={1,3,5,7,9};
	int totalSize = sizeof(n);
	int oneSize = sizeof(n[0]);
	int counts = totalSize / oneSize;
	cout << "陣列的大小為:" << totalSize << ",一個元素的大小是" << oneSize << "陣列的數量是" << counts;
	return 0;
}
