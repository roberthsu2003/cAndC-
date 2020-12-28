#include <iostream>
#include "tool.h"

using namespace std;
#define MAC

#ifdef MAC

#define OS "MAC_OS_VERSION_10_0"

#else

#define OS "window10"

#endif

int main() {
	cout << OS << endl;
}

tool.h
#ifndef __tool__
#define __tool__

#define RATE 32.78
//marco 巨集
#define SQUARE(x) (x) * (x)
//定義一個結構
typedef struct student{
	const char *name;
	int chinese, math, english;
} student;

#endif
