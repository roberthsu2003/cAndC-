#include <iostream>
using namespace std;

int main() {
	int a = 666;
	int b = 777;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//交換值
	int temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}
