#include <iostream>
using namespace std;

int main() {
	int n=10;
	int *p = &n;
	cout << "變數n的值=" << n << endl;
	cout << "變數n的位址=" << &n << endl;
	cout << "指標變數p的值=" << p << endl;
	cout << "指標變數p的記憶體位址是=" << &p << endl;
	cout << "指標變數指向的值=" << *p << endl;
}
