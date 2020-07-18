#include <iostream>
using namespace std;

int main() {
	int *p = new int(1);
	cout << "指標p的位址=" << p << endl; 
	cout << "*p=" << *p << endl;
	*p = 2;
	cout << "*p=" << *p << endl;
	delete p;
}
