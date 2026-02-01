#include <iostream>
using namespace std;

int add(int a, int b){
  int value = a + b;
  return value;
}

int main() { 
  int a = 6789;
  int b = 9876;
  int value = add(a, b);

  cout << "a+b=" << value << endl;
}
