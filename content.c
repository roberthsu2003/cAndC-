//遞迴(Recursive)
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

double factorial(double n){
	if(n==0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}

int main() {
	double n, total;
	cin >> n;
	total = factorial(n);
	printf("%.0f! = %.0f\n",n,total);
}
