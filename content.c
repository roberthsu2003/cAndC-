#include <iostream>
using namespace std;

int main() {
	double m = 5;
	int n = 10;
	cout << "變數m內的值=" << m << endl;
	cout << "變數n內的值=" << n << endl; 
	cout << "變數m內的記憶體位址=" << &m << endl;
	cout << "變數n內的記憶體位址值=" << &n << endl; 
	cout << "變數m內的記憶體大小=" << sizeof(m) << endl;
	cout << "變數n內的記憶體大小=" << sizeof(n) << endl; 
}
