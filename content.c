#include <iostream>
using namespace std;

int main() {
	double m = 5;
	cout << "變數m的值=" << m << endl;
	cout << "變數m的記憶體位址" << &m << endl;
	cout << "變數的所占的記憶體大小" << sizeof(m) << "Bytes" << endl;
	return 0;
}
