#include <iostream>
using namespace std;
int main() {
	int n[3] = {10, 20, 30};
	cout << "變數n的值:" << n << endl;
	cout << "n[0]=" << n[0] << endl;
	cout << "n[0]的記憶體位址=" << &n[0] << endl;
	cout << "n[1]=" << n[1] << endl;
	cout << "n[1]的記憶體位址=" << &n[1] << endl;
	cout << "n[2]=" << n[2] << endl;
	cout << "n[2]的記憶體位址=" << &n[2] << endl;
	cout << "*n=" << *n << endl;
	cout << "n+0=" << n+0 << endl;
	cout << "*(n+0)=" << *(n+0) << endl;
	cout << "*(n+1)=" << *(n+1) << endl;
	cout << "*(n+2)=" << *(n+2) << endl;
} 
