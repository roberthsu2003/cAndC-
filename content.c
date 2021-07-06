#include <iostream>
using namespace std;

void swap(int *n, int *m){
	int temp = *n;
	*n = *m;
	*m = temp;
}

int main() {
	int a = 666;
	int b = 777;
	cout << "a=" << a << ",b=" << b << endl;
	//2數交換,呼叫function swap
	swap(&a,&b);
	
	cout << "a=" << a << ",b=" << b << endl;
}
