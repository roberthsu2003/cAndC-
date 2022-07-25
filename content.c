#include <iostream>
using namespace std;
void swap_address(int *n, int *m){
	int temp;
	temp = *n;
	*n = *m;
	*m = temp;
}

void swap_reference(int& n, int& m){
	int temp;
	temp = n;
	n = m;
	m = temp;
}

int main() {
	int a=666,b=888;
	swap_reference(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
}
