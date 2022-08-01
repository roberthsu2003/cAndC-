#include <iostream>
using namespace std;

int main() {
	double m = 5;
	int n = 10;
	cout << "m value=" << m << endl;
	cout << "n value=" << n << endl;
	cout << "m address=" << &m << endl;
	cout << "n address=" << &n << endl;
	cout << "m size=" << sizeof(m) << endl;
	cout << "n size=" << sizeof(n) << endl;
}
