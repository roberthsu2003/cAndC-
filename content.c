#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int *p;
	p = &x;
	cout << "x=" << x << endl;
	cout << "*p=" << *p << endl;
}
