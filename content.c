#include <iostream>
using namespace std;
int main() {
	int n[3] = {10, 20, 30};
	cout << "陣列n的內容是:" << n << endl;
	cout << "陣列n[0]的位址是:" << &n[0] << endl;
	cout << "陣列n[0]的位址是:" << n+0 << endl;
}
