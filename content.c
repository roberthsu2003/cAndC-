#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int num;
	int count=0;
	cout << "請輸入一個數值:";
	cin >> num;
	cout << "質數有:" << endl;

	for(int i=2;i<=num;i++){
		if(isPrimeNumber(i)) {
			count += 1;
			cout << i << ",";
		}
	}
	cout << endl;

	cout << "共有" << count << "個質數" << endl;
	return 0;
}
