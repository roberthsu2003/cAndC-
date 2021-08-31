#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int* p = &n; //宣告指標變數p
	*p = 20; //使用取值運算子
	cout << "n的值是" << n << endl;
	return 0;
}
