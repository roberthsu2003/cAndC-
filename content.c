#include <iostream>
using namespace std;
int main() {
	int n = 10;
	int *p = &n;
	cout << "n的值是" << n << endl;
	cout << "p的值是" << p << endl;
	cout << "透過指標變數p,取得n內的值" << *p <<  endl;
	return 0;
}
