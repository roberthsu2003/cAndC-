//============================================================================
// Name        : forNest2.cpp
//利用2層迴圈列印九九乘法表

#include <iostream>
using namespace std;

int main() {
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			cout << i << "*" << j << "=" << i*j << "\t";
		}
		cout << "\n";
	}
	return 0;
}
