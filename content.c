#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int *p = &x;
	cout << "一般變數x=" << x << endl;
	cout << "指標變數p=" << p << endl;
	cout << "*p=" << *p << endl;
}
