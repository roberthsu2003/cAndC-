#include <iostream>

using namespace std;
int main() {
	unsigned char myChar = 100;
	printf("myChar:%u\n",myChar);
	cout << "myChar:" << myChar << "\n";

	unsigned short myShort = 60000;
	printf("myShort:%u\n", myShort);
	cout << "myShort:" << myShort << endl;

	int myInt = 210000000;
	printf("myInt:%d\n",myInt);
	cout << "myInt:" << myInt << endl;

	long long myLong = 21000000000000000;
	printf("myLong:%lld\n", myLong);
	cout << "myLong:" << myLong << endl;

	float myFloat = 3.145;
	printf("myFloat:%.2f\n", myFloat);
	cout << "myFloat:" << myFloat << endl;

	double myDouble = 35689.34567;
	printf("myDouble:%.4f\n", myDouble);
	cout << "myDouble:" << myDouble << endl;
}
