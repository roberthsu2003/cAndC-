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
	//利用2層迴圈列印「井」字，將其排列成直角三角形
	for(int i=1; i<=5; i++){
		for(int j=1; j<=i; j++){
			cout << "#";
		}
		cout << "\n";
	}
	return 0;
}
