//============================================================================
// Name        : recoursive.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

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
