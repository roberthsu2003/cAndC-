#include <iostream>
using namespace std;

int main() {
	int n = 10;
	//*是宣告指標變數
	int *p = &n;
	cout << "變數n的值=" << n << endl;
	cout << "變數n的位址=" << &n << endl;
	cout << "指標p的值=" << p << endl;
	//*取值運算子
	cout << "指標p指向的值是=" << *p << endl;
	cout << "&n記憶體指向的值是=" << *(&n) << endl;
	return 0;
}
