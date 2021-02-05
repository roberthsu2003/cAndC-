#include <iostream>
using namespace std;

int main() {
	int *p = new int(10);
	cout << "值是" << *p << endl;
	delete p;
	return 0;
}
