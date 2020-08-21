#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	char myChar = 100;
	printf("myChar:%d\n", myChar); 
	unsigned short myShort = 60000;
	printf("myShort:%d\n", myShort);
	int myInt = 210000000;
	printf("myInt:%d\n", myInt);
	long long myLong = 2100000000000000000;
	printf("myLong:%lld\n", myLong);
	float myFloat = 3.145;
	printf("myFloat:%.2f\n", myFloat);
	double myDouble = 35689.34567;
	printf("myDouble:%.4f\n", myDouble);
}
