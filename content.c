#include <iostream>
using namespace std;

int main() {
	int n[3] = {1, 2, 3};
	cout << "陣列變數n內儲存的值是" << n << endl;
	cout << "陣列元素n[0]的位址" << &n[0] << endl;
	cout << "陣列元素n[1]的位址" << &n[1] << endl;
	cout << "陣列元素n[2]的位址" << &n[2] << endl;
	cout << "陣列元素n+0的位址" << n+0 << endl;
	cout << "陣列元素n+1的位址" << n+1 << endl;
	cout << "陣列元素n+2的位址" << n+2 << endl;
}
