#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int* p = &n;
	cout << "一般變數:" << n << endl;
	cout << "指標變數:" << *p << endl;
} 
