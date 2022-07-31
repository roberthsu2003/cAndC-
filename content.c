#include <iostream>
using namespace std;

int main() {
 	int a = 666;
	int b = 888;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "2數對調" << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
