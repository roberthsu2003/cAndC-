#include <iostream>
using namespace std;

void swap(int*, int*);
int main() {
	int a = 666;
	int b = 888;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

void swap(int *m, int *n){
	int temp = *m;
	*m = *n;
	*n = temp;
}
