#include <iostream>
using namespace std;
int main() {
	//int n = 10;
	int *p = new int(10);
	//cout << "n的值是" << n << endl;
	cout << "p的值是" << p << endl;
	cout << "透過指標變數p,取得指向址址內的值" << *p <<  endl;
	return 0;
}
