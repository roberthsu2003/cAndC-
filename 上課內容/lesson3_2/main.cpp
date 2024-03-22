#include <iostream>
using namespace std;
//&變數,&叫做取址運算子
int main() {
  int i = 5;
  i = 10;
  cout << "儲存的值是:" << i << endl;
  cout << "i的記憶體位址:" << &i << endl;

  double m = 10.0;
  cout << "m的記憶體位址是:" << &m << endl;

	int *ptr_i;
	ptr_i = &i;

	double *ptr_m = &m;

	cout << "ptr_i儲存的內容是:" << ptr_i << endl;
	cout << "ptr_m儲存的內容是:" << ptr_m << endl;
}
