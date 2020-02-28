#include <iostream>
using namespace std;

int main() {
	int *p = new int(1);
	cout << "指標p的位址p=" << p << endl;
	cout << "*p=" << *p << endl;
	*p = 2;
	cout << "*p=" << *p << endl;
	delete p;
	cout << "釋放指標變數配置的記憶體空間";
	return 0;
}
