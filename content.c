#include <iostream>
using namespace std;

void swap(int*, int*);

int main() {
	int a = 666, b = 777;
	cout << "a=" << a << ",b=" << b << endl;
	swap(&a, &b);
	cout << "a=" << a << ",b=" << b << endl;

}

void swap(int *n, int *m){
	int temp = *n;
	*n = *m;
	*m = temp;
}
