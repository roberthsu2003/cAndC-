#include <iostream>
using namespace std;

int main() {
  int n[3] = {1, 2, 3};
  //使用陣列變數語法
  cout << "&n[0] = " << &n[0] << endl;
  cout << "n[0] = " << n[0] << endl;

  //使用指標變數語法
  cout << "n+0 = " << n+0 << endl;
  cout << "*(n+0) = " << *(n+0) << endl;



}
