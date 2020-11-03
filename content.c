#include <iostream>
using namespace std;

int main() {
	int n=10;
	int* p = &n;
	cout << "p的儲存的值是" << p << endl;
	cout << "p的記憶體位址" << &p << endl;
	cout << "由n取出值" << n << endl;
	*p = 20;
	cout << "由n取出值" << n << endl;
	n = 10;
	cout << "由p取出值" << *p << endl;
}
