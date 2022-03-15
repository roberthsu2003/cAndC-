#include <iostream>
using namespace std;

void swap(int* x, int* y);

int main() {
	int n = 666, m = 777;
	swap(&n,&m);
	cout << "n=" << n << endl;
	cout << "m=" << m << endl;
}

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

