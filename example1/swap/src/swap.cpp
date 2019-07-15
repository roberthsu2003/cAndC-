//============================================================================
// Name        : swap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void swap(int *, int *);
int main() {
	int a=666, b=777;
	cout << "a=" << a << ",b=" << b << endl;
	swap(&a,&b);
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
}

void swap(int *x, int *y){
	int tempx;
	tempx = *x;
	*x = *y;
	*y = tempx;
}
