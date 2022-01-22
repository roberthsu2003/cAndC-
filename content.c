#include <iostream>
using namespace std;

int add(int n, int m){
	int total = n + m;
	return total;
}

void swap(int n, int m){
	int temp = n;
	n = m;
	m = temp;
}

int main() {
	int n = 10;
	int m = 20;
	cout << "n=" << n << endl;
	cout << "m=" << m << endl;
	cout << "2數相加後的值是;" << endl;
	int total = add(n,m);
	cout << "2數相加後的值是;" << total << endl;

	cout << "2數交換後的值是:" << endl;
	swap(n,m);
	cout << "n=" << n << endl;
	cout << "m=" << m << endl;

} 
