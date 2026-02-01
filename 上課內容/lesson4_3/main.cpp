#include <iostream>
using namespace std;

//建立指標變數
//取址運算子 -> &一般變數名稱
//取值運算子 -> *記憶體位址

void change_value(int *ptr_n) { 
  *ptr_n = 20; 
}

int main() {
  int n = 5;
  change_value(&n);
  cout << "n的值是" << n << endl;
}
