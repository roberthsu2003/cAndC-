#include <iostream>
using namespace std;
//c++才有的功能,傳參考
void swap(int &n, int &m){
	int temp = n;
	n = m;
	m = temp;
}

int main() {
	int a=666, b=777;
	cout << "a=" << a << ",b=" << b << endl;
	swap(a,b);
	cout << "a=" << a << ",b=" << b << endl;
	return 0;
}
