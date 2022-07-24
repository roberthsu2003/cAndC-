#include <cmath>
#include <iostream>

using namespace std;

//輸入整數數值,開根號 + 10,平方
//自訂的function
double caculater1(int num1) {
  double value = sqrt(num1) + 10;
  double result = pow(value, 2);
  return result;
}

int main() {
  int number;
  cout << "請輸入一個數字(整數):";
  cin >> number;
  double result = caculater1(number); //呼叫function
  cout << "公式計算完後,得到的值是" << result << endl;
  return 0;
}
