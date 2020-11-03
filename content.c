#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int m = 20;
	int *p;
	p = &n;
	cout << "*p的值" << *p << endl;
	p = &m;
	cout << "*p的值" << *p << endl;

}
