#include <iostream>
//讓使用者輸入三個任意數，程式會顯示三數中的最大數。
using namespace std;
int main() {
  double in1, in2, in3, max;
  cout << "請輸入第一個數:";
  cin >> in1;
  cout << "請輸入第二個數:";
  cin >> in2;
  max = in1 > in2 ? in1 : in2; //三元運算式
  cout << "請輸入第三個數:";
  cin >> in3;
  max = max > in3 ? max : in3; //三元運算式
  cout << "輸入三個數中,最大的數為:" << max << endl;
}
