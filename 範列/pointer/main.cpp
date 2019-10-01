#include <iostream>
using namespace std;

int main() {
  double m = 5;
  int n = 10;
  cout << "變數m的值=" << m << endl;
  cout << "變數n的值=" << n << endl;
  cout << "變數m的記憶體位置=" << &m << endl;
  cout << "變數n的記憶體位置=" << &n << endl; 
  cout << "變數m的記憶體大小=" << sizeof(m) << "Bytes" << endl;
  cout << "變數n的記憶體大小=" << sizeof(n) << "Bytes" << endl;
}
