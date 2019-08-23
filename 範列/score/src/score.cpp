//============================================================================
// Name        : score.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int n = 5;
	int score[n];
	double sum = 0, ave;
	for(int i=0; i<n; i++){
		cout << "請輸入第" << i+1 << " 位學生的成績:";
		cin >> score[i];
	}

	for(int i=0; i<n; i++){
		sum += score[i];
	}

	ave = sum/n;

	cout << "全班總成績為:" << sum << "分, 平均為" << ave << "分\n";
}
