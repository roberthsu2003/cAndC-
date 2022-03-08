#include <iostream>
using namespace std;
int main() {
	int n[3] = {10, 20, 30};
	cout << "陣列n的內容是:" << n << endl;
	cout << "陣列n[0]的位址是:" << &n[0] << endl;
	cout << "陣列n[0]的位址是:" << n+0 << endl;

	int* m = n;
	cout << "指標變數m的內容是" << m << endl;
	cout << "陣列n[0]的內容是" << m[0] << endl;
	cout << "陣列n[1]的內容是" << m[1] << endl;
	cout << "陣列n[2]的內容是" << m[2] << endl;
	m[0] = 100;
	cout << "陣列n[0]的內容是" << n[0] << endl;
}
