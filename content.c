#include <iostream>
using namespace std;

void swap(int*, int*);

int main() {
	int a = 666;
	int b = 777;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//交換值
	swap(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}

void swap(int *m, int *n){
//交換值
	int temp = *m;
	*m = *n;
	*n = temp;

}
