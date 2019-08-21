//============================================================================
// Name        : array1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : 建立陣列，而且存取陣列內的值
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int scores[3];
	scores[0] = 70;
	scores[1] = 80;
	scores[2] = 90;

	cout << scores[0] << "," << scores[1] << ","<< scores[2] << endl;
	return 0;
}
