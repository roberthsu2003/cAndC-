#include <iostream>
using namespace std;
int main() {
	int n[3];
	cout << "陣列n的address:" << n << endl;
	cout << "n[0]address:" << &n[0] << endl;
	cout << "n[1]address:" << &n[1] << endl;
	cout << "n[2]address:" << &n[2] << endl;
	cout << "n+0 address:" << n+0 << endl;
	cout << "n+1 address:" << n+1 << endl;
	cout << "n+2 address:" << n+2 << endl;
}
