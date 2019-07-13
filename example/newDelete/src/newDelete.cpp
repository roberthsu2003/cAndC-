//============================================================================
// Name        : newDelete.cpp
//new 宣告指標變數p並將p儲存值設為1, 即*p=1，程式結束以後以delete釋放指標變數配置的記憶體空間。

#include <iostream>
using namespace std;

int main() {
	int *p = new int(1); //初始化
	cout << "指標p的位址p=" << p << endl;  // 顯示指標p的位址
	cout << "*p=" << *p << endl;
	*p = 2;
	cout << "*p=" << *p << endl;
	delete p;
	return 0;
}
