#include <iostream>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int m = 666;
	int n = 888;
	/*
	int temp = m;
	m = n;
	n = temp;
	*/
	swap(&m,&n);

	cout << "m=" << m << endl;
	cout << "n=" << n << endl;
}
