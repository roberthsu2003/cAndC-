#include <iostream>
using namespace std;

int main() {
 	int n=10;
	int* p = &n;
	*p = 15;
	cout << "n=" << n << endl;
}
