#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	int i = 10;
	printf("i的記憶體大小%dbyte\n",(int)sizeof(i));

	float f = 10.12;
	printf("f的記憶體大小%dbyte\n",(int)sizeof(f));

	double d=10.12;
	printf("f的記憶體大小%dbyte\n",(int)sizeof(d));

	long l=10;
	printf("l的記憶體大小%dbyte\n",(int)sizeof(l));

	long long int lli=10;
	printf("lli的記憶體大小%dbyte\n",(int)sizeof(lli));

	int n[]={1, 3, 5, 7, 9, 11, 13, 15, 17,19};
	printf("n的記憶體大小%dbyte\n",(int)sizeof(n));
	printf("n[0]的記憶體大小%dbyte\n",(int)sizeof(n[0]));
	printf("n的數量%d個\n",(int)(sizeof(n)/sizeof(n[0])));
}
