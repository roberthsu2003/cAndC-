//============================================================================
// Name        : p_array3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char *str1 = "One";
	char str2[] = "Two";
	cout << "以陣列顯示str1字串" << endl;
	for(int i=0; i < 3; i++){
		cout << "str1[" << i << "]=" << str1[i] << endl;
	}

	cout << "以指標變數顯示str1字串" << endl;
	for(int i=0; i < 3; i++){
		cout << "(str2 + " << i << ")=" << *(str2+i) << endl;
	}

	//指標變數的位址是可以更改的
	str1=str2;
	cout << "str1的內容被更改後，指向新的內容" << endl;
	for(int i=0; i < 3; i++){

			cout << "str1[" << i << "]=" << str1[i] << endl;
	}

	//陣列變數的位址是不可以更改的
	//str2 = str1;
	return 0;
}
