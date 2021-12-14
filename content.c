#include <iostream>
using namespace std;

int main() {
	int x = 1;
	int y;
	y = x++;

	cout << "x=" << x << ",y=" << y << endl;


	int n = 1;
	int m;
	m = ++n;
	cout << "n=" << n << ",m=" << m << endl;
} 
