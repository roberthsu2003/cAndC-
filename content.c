#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  // c++的string
  string name;
  cout << "請輸入姓名:";
  cin >> name;
  cout << name << endl;

  // c語言字元陣列
  char my_name[50];
  cout << "請輸入我的姓名:";
  scanf("%s", my_name);
  cout << my_name << endl;
}
