#include <iostream>
using namespace std;
int main() {
	int *a = new int(10);
	int *b = new int(30);

	cout <<  "a=" << a << endl;
	cout << "b=" << b << endl;
	int total = *a + *b;
	cout << "total=" << total << endl;
}
