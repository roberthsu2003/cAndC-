#include <iostream>
using namespace std;

void swap(int* n, int* m){
	//取值運算子
	//2數對調
	int temp = *n;
	*n = *m;
	*m = temp;
}

int main() {
	int a=666, b=777;
	cout << "a=" << a << ",b=" << b << endl;
	swap(&a,&b);//取址運算子
	cout << "a=" << a << ",b=" << b << endl;
} 
