//============================================================================
// Name        : pointer4.cpp
//宣告n=10,指標p指向n的位址，以指標p在取記憶體的內容

#include <iostream>
using namespace std;

int main() {
	int n=10;
	int *p = &n;
	cout << "變數n的值=" << n << endl;
	cout << "指標p的記憶體內容=" << *p << endl;

	*p=20;
	cout << "改變後變數n的值=" << n << endl;

	return 0;
}
