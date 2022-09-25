#include <iostream>
using namespace std;

int function1(int c) {
  c++;
  cout << "c的值是:" << c << endl;
  return c;
}

int main() {
  int a = 10;
  int b = 20;
  a = function1(a);
  cout << "a的變數是:" << a << endl;
}
