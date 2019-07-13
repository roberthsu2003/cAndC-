//============================================================================
// Name        : array2.cpp
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
	for(int i=0;i<3;i++){
		cout << "str1[" << i << "]=" << str1[i] << endl;
	}

	cout << "以指標顯示 str2陣列" << endl;
	for(int i=0;i<3;i++){
			cout << "*(str2+" << i << ")=" << *(str2+i) << endl;
	}
	return 0;
}
