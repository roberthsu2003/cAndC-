#include <iostream>
using namespace std;

int main() {
  int x;
  int y;
  cout << "請輸入變數x的值X=";
  cin >> x;
  cout << "請輸入變數y的值y=";
  cin >> y;
  int *p = &x;
  int *m = &y;
  cout << *p << "+" << *m << "=" <<*p + *m;
  
}
