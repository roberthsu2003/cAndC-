#include <iostream>
using namespace std;

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int m = 666;
	int n = 888;
	cout << "原本的數:m=" << m;
	cout << ",n=" << n << endl;

	swap(&m,&n);

	cout << "swap後:m=" << m;
	cout << ",n=" << n << endl;
}
