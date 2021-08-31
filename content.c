#include <iostream>
using namespace std;

void swap(int *n, int *m){
	int temp = *n;
	*n = *m;
	*m = temp;
}

int main() {
	int a=666, b=777;
	cout << "2數值交換" << endl;
	swap(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}
