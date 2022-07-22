#include <iostream>
using namespace std;

int main() {
	int a = 333;
	int b = 666;
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
