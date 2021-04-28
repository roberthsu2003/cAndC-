#include <iostream>
using namespace std;
//&變數,使用取址運算子

int main() {
	int n = 10;
	double m = 5;
	cout << "變數m的值=" << m << endl;
	cout << "變數n的值=" << n << endl;
	cout << "變數m的記憶體位址=" << &m << endl;
	cout << "變數n的記憶體位址=" << &n << endl;
	//sizeof()
	cout << "變數m的記憶體=" << sizeof(m) << "Bytes" << endl;
	cout << "變數n的記憶體=" << sizeof(n) << "Bytes" << endl;
	return 0;
}
