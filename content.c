#include <iostream>
using namespace std;

int main() {
	int a=666, b=777;
	cout << "a=" << a << ",b=" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
}
