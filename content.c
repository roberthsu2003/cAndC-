#include <iostream>
using namespace std;

int main() {
	int n=10;
	int *p = &n;
	cout << "n的值是" << n << endl;
	cout << "p指向的值" << *p << endl;
	*p = 20;
	cout << "改變後n的值是" << n << endl;
}
