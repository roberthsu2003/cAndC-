#include <iostream>
using namespace std;

//建立指標變數
//取址運算子 -> &一般變數名稱
//取值運算子 -> *記憶體位址

int main() {
  int n = 5;
  n = 10;
  int *ptr_n = &n;

  *ptr_n = 20; //取值運算子
  cout << "n變數內的值" << n << endl;
  cout << "n變數內的值" << *ptr_n << endl;   //取值運算子
  cout << "n的記憶體位址:" << ptr_n << endl; //指標變數
}
