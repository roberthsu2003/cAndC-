//============================================================================
// Name        : p_array1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n[3] = {1,2,3};
	cout << "陣列元素 \t\t 位      址 \t \t值 \n";
	cout << "-------------------------------------------\n";
	for(int i=0; i<3; i++){
		cout << "n[" << i << "]\t\t" << &n[i] << "\t\t" << n[i] << endl;
	}

	//以指標變數的語法
	cout << "陣列指標 \t\t 位      址 \t\t值 \n";
	cout << "-------------------------------------------\n";
	for(int i=0; i<3; i++){
		cout << "n+" << i << "\t\t" << n+i << "\t\t" << *(n+i) << endl;
	}

	return 0;
}
