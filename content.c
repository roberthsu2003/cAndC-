#include <iostream>

int main() {
	short myShort;
	int myInt;
	float myFloat;
	double myDouble;
	int myArray[5];
	
	printf("myShort:%u\n", (unsigned int)sizeof(myShort));
	printf("myInt:%u\n", (unsigned int)sizeof(myInt));
	printf("myFloat:%u\n", (unsigned int)sizeof(myFloat));
	printf("myDouble:%u\n", (unsigned int)sizeof(myDouble));
	printf("myArray:%u\n", (unsigned int)sizeof(myArray));
	printf("myArray[0]:%u\n", (unsigned int)sizeof(myArray[0]));
	int arraySize = sizeof(myArray) / sizeof(myArray[0]);
	
	printf("陣列的size是%i", arraySize);
}
