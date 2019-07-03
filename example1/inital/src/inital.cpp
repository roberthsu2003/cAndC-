//============================================================================
// Name        : inital.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/*
	int scores[3];
	scores[0] = 89;
	scores[1] = 95;
	scores[2] = 72;
	*/
	//在定義時同時給值

	int scores[] = {89, 95, 72};
	cout << "第一科的成績:" << scores[0] << "分\n";
	cout << "第二科的成績:" << scores[1] << "分\n";
	cout << "第三科的成績:" << scores[2] << "分\n";
	cout << "第四科的成績:" << scores[3] << "分\n";
	return 0;
}
