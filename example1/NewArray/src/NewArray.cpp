//============================================================================
// Name        : NewArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "請輸入要配置的一維陣列大小=";
	cin >> n;
	int *p = new int[n];
	for (int i=0; i<n; i++){
		cin >> *(p+i);
	}

	cout << "陣列的元素值為" << endl;
	for(int i=0; i<n; i++){
		cout << p[i] << endl;
	}
	delete[] p;
	return 0;
}
