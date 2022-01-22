#include <iostream>
using namespace std;

int main() {
	int* m = new int(10);
	cout << "*m指向的值是:" << *m << endl;

	double* n = new double(20.5);
	cout << "*n指向的值是:" << *n << endl;
	//cout << "*m + *n" << *m + *n << endl;
	double total = *m + *n;
	cout << "totol一般變數的值是" << total << endl;

	double *totalptr = &total;
	cout << "*totol指標變數指向的值是" << *totalptr << endl;
} 
