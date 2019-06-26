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
	float area = PI * radius * radius;
	printf("字串格式化:%d,%.2f\n",10,10.2);
	printf("圓面積是:%.4f\n",area);
	cout << "圓面積是" << area << endl;
	return 0;
}
