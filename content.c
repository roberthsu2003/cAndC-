#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n=0, m=0;
	printf("請輸入被除數(整數):");
	cin >> n;
	cout << "請輸入除數(整數,不可以為0):";
	cin >> m;
	
	cout << "商:" << n/m << "餘數:" << n%m << "\n";
	return 0;
}
