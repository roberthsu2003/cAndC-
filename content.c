#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int x = 1;
	int y = ++x;
	printf("x=%d, y=%d\n",x,y);

	x = 1;
	y = x++;
	printf("x=%d, y=%d\n",x,y);
}
