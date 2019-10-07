#include <iostream>
using namespace std;
int main() {
  int n[3] = {1, 2, 3};
  cout << "陣列n的位址" << n << endl; //陣列變數存的是記憶體位址
  cout << "陣列元素n[0]的位址" << &n[0] << endl;
  cout << "陣列元素n[1]的位址" << &n[1] << endl;
  cout << "陣列元素n[2]的位址" << &n[2] << endl;
  return 0;
}
