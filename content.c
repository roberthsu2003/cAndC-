#include <iostream>
using namespace std;

int main() {
	int a=666, b=777;
	cout << "2數值交換" << endl;
	int temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}
