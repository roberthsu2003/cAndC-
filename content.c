#include <iostream>
using namespace std;
void swap(int *n, int *m) {
  int temp = *n;
  *n = *m;
  *m = temp;
}

int main() {
  int a = 666;
  int b = 888;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  cout << "2數對調" << endl;
  swap(&a, &b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
}
