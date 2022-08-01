#include <iostream>
using namespace std;
int main() {
	int n = 10;
	int *p;
	p = &n;
	cout << "p的內容:"<< p << endl;
	cout << "n的value:" << n << endl;
	cout << "*p的value:" << *p << endl;
	n = 20;	
	cout << "n的value:" << n << endl;
	cout << "*p的value:" << *p << endl;
	*p = 10;
	cout << "n的value:" << n << endl;
	cout << "*p的value:" << *p << endl;

	int **ptr = &p;
	cout << *ptr << endl;
	cout << **ptr << endl;
	cout << ptr << endl;
	
}
