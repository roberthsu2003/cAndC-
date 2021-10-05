#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int num;
	cout << "請輸入一個數值:";
	cin >> num;
	cout << "質數有:" << endl;
	for(int i=2;i<=num;i++){
		if(isPrimeNumber(i)) {
			cout << i << ",";
		}
	}
	cout << endl;
	return 0;
}
