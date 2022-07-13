#include <iostream>
using namespace std;

int main() {
	int x = 1;
	int y = ++x; //前置遞增
	cout << "x=" << x << ",y=" << y << endl;

	int m = 1;
	int n = m++; //後置遞增
	cout << "m=" << m << ",n=" << n << endl;
}
