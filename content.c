#include <iostream>
using namespace std;

//定義function
void swap(int *n, int *m){
	int temp = *n;
	*n = *m;
	*m = temp;
}

int main() {
	int a = 666, b = 777;
	cout << "a=" << a << ",b=" << b << endl;
	//呼叫swap的function
	swap(&a,&b);
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
}
