#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int* p = &n;
	*p = 20;
	cout << "改變後的變數n的值=" << n << endl;
	return 0;
}
