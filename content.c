#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int *p = &n;
	cout << "指標p的儲存內容:" << p << endl;
	cout << "指標p指向的內容:" << *p << endl;
}
