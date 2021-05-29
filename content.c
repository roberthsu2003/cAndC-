#include <iostream>
using namespace std;

int main() {
	//前置
	int x = 1;
	int y = ++x;
	//x = x + 1
	// y = x
	printf("x=%d,y=%d\n",x, y);

	//後置
	int m = 1;
	int n = m++;
	// n = m
	// m = m + 1
	printf("m=%d,n=%d\n",m,n);
	return 0;
}
