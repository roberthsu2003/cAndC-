//============================================================================
// Name        : fruit_s.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string fruits[3];
	for(int i=0; i<3 ;i++){
		cout << "請輸入第" << i+1 << "個喜歡的水果";
		cin >> fruits[i];
	}

	cout << "您喜歡吃的水果是" << fruits[0] << "," << fruits[1] << "," << fruits[2] << endl;
	return 0;
}
