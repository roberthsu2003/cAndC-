#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int n,m;
	printf("請輸入被除數(整數):");
	cin >> n;

	printf("請輸入除數(整數,不可以為0):");
	cin >> m;

	printf("商:%d,餘數:%d\n",n/m,n%m);
}
