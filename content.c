#include <iostream>
using namespace std;

int main() {
	int n[] = {1, 2, 3, 4};
	cout << "陣列n內放的記憶體位址是" << n << endl;
	cout << "陣列元素n[0]的位址=" << &n[0] << endl;
	cout << "陣列元素n[1]的位址=" << &n[1] << endl; 
	cout << "陣列元素n[2]的位址=" << &n[2] << endl;
	cout << "陣列元素n[3]的位址=" << &n[3] << endl;
	return 0;
}
