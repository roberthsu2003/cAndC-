#include <stdio.h>

int main(void) {
  	unsigned char myChar = 100;
	printf("myChar:%u\n",myChar);

	unsigned short myShort = 60000;
	printf("myShort:%u\n", myShort);

	int myInt = 210000000;
	printf("myInt:%d\n",myInt);

	long long myLong = 21000000000000000;
	printf("myLong:%lld\n", myLong);

	float myFloat = 3.145;
	printf("myFloat:%.2f\n", myFloat);

	double myDouble = 35689.34567;
	printf("myDouble:%.4f\n", myDouble);
  return 0;
}
