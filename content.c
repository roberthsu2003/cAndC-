#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int x = 1;
	int y = ++x;
	cout << "x=" << x << ",y=" << y << endl;
	printf("x=%d,y=%d\n",x,y);

	int m = 1;
	int n = m++;
	cout << "m=" << m << ",n=" << n << endl;
	printf("m=%d,n=%d\n",m,n);
}
