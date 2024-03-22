#include <iostream>
using namespace std;

void swap(int* ptr_m, int *ptr_n){
	cout << "ptr_m儲存的記憶體是:" << ptr_m << endl;
	cout << "ptr_n儲存的記憶體是:" << ptr_n << endl;
	cout << "ptr_m指向的值是" << *ptr_m << endl;
	cout << "ptr_n指向的值是" << *ptr_n << endl;

	int temp;
	temp = *ptr_m;
	*ptr_m = *ptr_n;
	*ptr_n = temp;
}

int main() {
	int m = 666;
	int n = 888;
	cout << "m=" << m << endl;
	cout << "n=" << n << endl;
	cout << "m的記憶體位址是:" << &m << endl;
	cout << "n的記憶體位址是:" << &n << endl;
	swap(&m, &n);
	cout << "更改完後的值是" << endl;
	cout << "m=" << m << endl;
	cout << "n=" << n << endl;
}
