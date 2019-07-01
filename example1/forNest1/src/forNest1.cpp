//============================================================================
// Name        : forNest1.cpp
//利用2層迴圈列印「井」字，將其排列成直角三角形

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
