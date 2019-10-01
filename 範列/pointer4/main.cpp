#include <iostream>
using namespace std;

int main() {
  int n = 10;
  int *p = &n;
  cout << "變數n的值=" << n << endl;
  cout << "變數n的位址" << &n << endl;
  cout << "指標變數p的值是=" << p << endl;
  cout << "指標變數P的記憶體位址是=" << &p << endl;
  cout << "指標p指向的值是=" << *p << endl;
  return 0;
}
