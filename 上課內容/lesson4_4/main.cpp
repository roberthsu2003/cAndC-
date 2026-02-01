#include <iostream>
using namespace std;

int* add(int a, int b){
  int* value = new int(0); //動態變數
  *value = a + b;
  return value;
}

int main() { 
  int a = 6789;
  int b = 9876;
  int* value_ptr = add(a, b);

  cout << "a+b=" << *value_ptr << endl;
  delete value_ptr;
  return 0;
}
