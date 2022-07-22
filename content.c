#include <iostream>
using namespace std;

int main() {
	int n=10;
	int *p; //宣告指標變數p
	p = &n;
	cout << "n儲存的內容是" << n << endl;
	cout << "p指向變數的內容" << *p << endl; //使取值運算子
}
