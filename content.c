#include <iostream>
using namespace std;

int main() {
  int n[3] = {1,2,3};
  //陣列變數
  cout << "使用陣列變數-取記憶體位址"  << &n[0] << endl;
  cout << "使用陣列變數-取值:" << n[0] << endl;
  cout << "使用指標變數-取記憶體位址" << n+0 << endl;
  cout << "使用指標變數-取值" << *(n+0) << endl;

}
