#include <iostream>
using namespace std;

//一行輸入多個值

int main() { 
  int a, b, c;
  cout << "請輸入三個整數(用空格分隔):";
  cin >> a >> b >> c;

  cout << "您輸入的數字是: " << a << ", " << b << ", " << c << endl; 
  cout << "總和:" << a + b + c << endl;
  cout << "平均值" << (a + b + c) / 3.0 << endl;

  return 0;
}
