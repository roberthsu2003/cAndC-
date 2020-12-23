#include <iostream>
using namespace std;

int main() {
	double m = 5;
	int n = 10;
	cout << "變數m的值=" << m << endl;
	cout << "變數n的值=" << n << endl;
	cout << "變數m的位址=" << &m << endl;
	cout << "變數n的位址=" << &n << endl;
	cout << "變數m的記憶體=" << sizeof(m) << "Bytes" << endl;
	cout << "變數n的記憶體=" << sizeof(n) << "Bytes" << endl;	
}
