#include <iostream>
using namespace std;
int main() {
  int n = 10;
  cout << "變數n的值" << n << endl;
	cout << "變數n的address:" << &n << endl;
	int* p; //建立指標變數,記憶位址會指向int資料類型的記憶體空間
	p = &n;	//將n的記憶體空間位址給指標變數p
	cout << "指標變數指向的記憶體空間的值是:" << *p << endl;

	cout << "改變n的值為100" << endl; 	
	n = 100;
	cout << "指標變數指向的記憶體空間的新值是:" << *p << endl;
}
