#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int m = 20;
	int *p;
	p = &n;

	cout << "變數n的值=" << n << endl;
	cout << "指標p指向的記憶體位址=" << p << endl;
	cout << "*p的值=" << *p << endl;
	cout << "----------------------------" << endl;

	p = &m;
	cout << "變數m的值=" << m << endl;
	cout << "指標p指向的記憶體位址=" << p << endl;
	cout << "*p的值=" << *p << endl;
	cout << "----------------------------" << endl;
	return 0;
}
