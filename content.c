#include <iostream>
using namespace std;
int main() {
	int* ptr_n = new int(10);
	cout << "ptr_n指向的值:" << *ptr_n << endl;

	int* ptr_m = new int();
	*ptr_m = 20;

	int sum = *ptr_n + *ptr_m;

	cout << sum << endl;
	
}
