#include <iostream>
using namespace std;

int main() {
	int n = 1;
	int m = ++n;
	cout << "n=" << n << endl;
	cout << "m=" << m << endl;

	int x = 1;
	int y = x++;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}
