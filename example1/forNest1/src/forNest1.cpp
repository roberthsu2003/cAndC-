//============================================================================
// Name        : forNest1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	for(int i=1; i<=5; i++){
		cout<< "外部第" << i << "次迴圈";
		for(int j=1; j<=i; j++){
			cout << "#";
		}
		cout << "\n";
	}
	return 0;
}
