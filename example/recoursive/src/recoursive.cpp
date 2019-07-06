//============================================================================
// Name        : recoursive.cpp
//自鍵盤輸入一個數字n, 利用遞迴來計算n階層(n!)

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

double factorial(double n){
	if(n == 0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}

int main() {
	double n, total;
	cout << "請輸入數字 n:";
	cin >> n;
	total = factorial(n);
	//cout << n << "!=" << total << endl;
	printf("%f!=%10.0f",n,total);
	return 0;
}
