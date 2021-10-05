#include <iostream>
#include "tools.h"
using namespace std;

int main() {
	int num;	
	cout << "請輸入一個數值:";
	cin >> num;	

	string message = isPrimeNumber(num) ? "是質數" : "不是質數";
	cout << num << message << endl;
	return 0;
}



