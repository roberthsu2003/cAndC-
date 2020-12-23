#include <iostream>
using namespace std;

int main() {
	int n=10;
	int *p = &n;
	cout << "變數n的值=" << n << endl;
	cout << "變數n的記憶體位址" << &n << endl;
	cout << "指標p的值是=" << p << endl;
	cout << "指標p的記憶體位址是=" << &p << endl;
	cout << "指標p指向的值是" << *p << endl;
	cout << "&n記憶體指向的值是" << *(&n) << endl;
}
