#include <iostream>
using namespace std;

int main() {
	int a = 666;
	int b = 777;
	cout << "a=" << a << ",b=" << b << endl;
	//2數交換
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << ",b=" << b << endl;
}
