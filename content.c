#include <iostream>
using namespace std;

void sub(int* n){
	*n = 100;
}

int main() {
  int a = 10;
  sub(&a);
  cout << "a變數的值是" << a << endl;
  return 0;
}
