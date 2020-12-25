#include <iostream>
using namespace std;

int main() {
	/*
	int n;	
	int *p = &n;
	*p = 10;	
	cout << *p;
	*/

	int *p = new int;
	*p = 10;
	cout << *p << endl;
	

	int *a = new int[50];
	a[0] = 1;
	a[2] = 2;
	cout << *(a+0) << endl;
	cout << *(a+1) << endl;
}
