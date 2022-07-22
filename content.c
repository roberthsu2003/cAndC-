#include <iostream>
using namespace std;

void swap(int mya, int myb) {
  int temp = mya;
  mya = myb;
  myb = temp;
}

int main() {
  int a = 333;
  int b = 666;
  swap(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
}
