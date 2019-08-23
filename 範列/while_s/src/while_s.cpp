//============================================================================
// Name        : while_s.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num = 0, sum = 0, inputScore;

	do{
		num++;
		cout << "請輸入第" << num << "位學生的成績:";
		cin >> inputScore;
		sum += inputScore;

	}while (inputScore >= 0);
	cout << "全班總成績為:" << sum << "分, 平均為" << (float)sum/num << "分";
	return 0;
}
