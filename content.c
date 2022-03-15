#include <iostream>
using namespace std;

void swap(int* x, int* y);

int main() {
	int* np = new int(666);
	int* mp = new int(777);
	swap(np,mp);
	cout << "n=" << *np << endl;
	cout << "m=" << *mp << endl;
}

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

