//============================================================================
// Name        : newDelete.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int *p = new int(1); //初始化
	cout << "指標p的位址p=" << p << endl;  // 顯示指標p的位址
	cout << "*p=" << *p << endl;
	*p = 2;
	cout << "*p=" << *p << endl;
	delete p;
	return 0;
}
