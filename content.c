#include <iostream>
using namespace std;

int main() {
	int n[3] = {10, 20 , 30};
	cout << "陣列n的位址=" << n << endl;	
	cout << "陣列n[0]的位址=" << &n[0] << endl;
	cout << "陣列n[1]的位址=" << &n[1] << endl;
	cout << "陣列n[2]的位址=" << &n[2] << endl;
	cout << "陣列n[0]的位址=" << n+0 << endl;
	cout << "陣列n[1]的位址=" << n+1 << endl;
	cout << "陣列n[2]的位址=" << n+2 << endl;
}
