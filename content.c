#include <iostream>
using namespace std;
// int* 建立指標變數
// &m 取址運算子
// *記憶體位置 取值運算子

int main() {
	
	//int* ptrX;
	int *ptrX;
	int m = 100;
	ptrX = &m;
	cout << "ptrX的記憶體位置是:" << ptrX << endl;
	cout << "透過m取出值是:" << m << endl;
	cout << "透過指標變數取出的值:" << *ptrX << endl;	
}
