#include <iostream>
using namespace std;

int main() {
	int x = 1;
	int y = ++x;
	cout << "x=" << x << ",y=" << y << endl;

	int m = 1;
	int n = m++;
	cout << "m=" << m << ",n=" << n << endl;

}
