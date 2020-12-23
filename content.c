#include <iostream>
using namespace std;

int main() {
	int a = 666, b= 888;
	cout << "a=" << a << ",b=" << b << endl;
	//2數交換
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << ",b=" << b << endl;
}
