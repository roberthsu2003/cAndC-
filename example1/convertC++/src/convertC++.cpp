//============================================================================
// Name        : convertC++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	float PI = 3.14159;
	int radius = 10;
	int area = PI * radius * radius;
	printf("字串格式化:%d,%.2f\n",10,10.2);
	printf("圓面積是:%d\n",area);
	cout << "圓面積是" << area << endl;

	//強制轉換
	short a = 123;
	int b;
	b = (int)a;

	int a1 = 1234567;
	short b1;
	b1 = (short)a1;
	cout << "b1是" << b1;
	return 0;
}
