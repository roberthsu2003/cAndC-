#include <iostream>
using namespace std;

void swap(int *n, int *m){
	int temp = *n;
	*n = *m;
	*m = temp;
}

int main() {
	int a = 666, b = 777;
	cout << "交換前 a=" << a << ",b=" << b << endl; 
	swap(&a,&b);
	cout << "交換後 a=" << a << ",b=" << b << endl; 
	return 0;
}
