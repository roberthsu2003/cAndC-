//============================================================================
// Name        : str1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string str1 = "DevC++";
	cout << "str1:" << str1 << endl;
	char str2[] = {'D','e','v','C','+','+','\0'};
	cout << "str2:" << str2 << endl;
	char str3[] = "DevC++";
	cout << "str3:" << str3 << endl;

	str1 = "VirturlC++";
	cout << "str1:" << str1 << endl;

	//str2 = "VirturlC++"; //錯誤
	return 0;
}
