#include <iostream>
using namespace std;
int main() {
	int x = 1;
	int y = ++x;
	printf("x=%d, y=%d\n",x, y);

	int m = 1;
	int n = m++;
	printf("m=%d, n=%d\n",m, n);
}
