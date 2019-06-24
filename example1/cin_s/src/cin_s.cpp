//============================================================================
// Name        : cin_s.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int englishScore = 60;
	cout << "原本的分數是:" << englishScore << endl;
	cout << "請輸入新的分數:";
	cin >> englishScore;
	cout << "您的新分數是:" << englishScore;
	return 0;
}
