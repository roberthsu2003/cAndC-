#include <iostream>
using namespace std;

int main() {
	int n[3] = {10, 20 ,30};
	cout << "陣列變數內的記憶體位址是" << n << endl; 
	cout << "n[0]的值是" << n[0] << endl;
	cout << "&n[0]的位址是" << &n[0] << endl;
	cout << "&n[1]的位址是" << &n[1] << endl;
	cout << "&n[2]的位址是" << &n[2] << endl;
	cout << "n+0的位址是" << n+0 << endl;
	cout << "n+1的位址是" << n+1 << endl;
	cout << "n+2的位址是" << n+2 << endl;
	return 0;
}
