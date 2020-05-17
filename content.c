#include <iostream>
using namespace std;

int main() {
	int a = sizeof(char);
	int b = sizeof(double);
	int c = sizeof(a);
	int d = sizeof(a+b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
}
