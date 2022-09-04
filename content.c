#include <iostream>
using namespace std;

int main() {
  int num1 = 20;
  int num2 = 4;
  char op;
  cout << "請輸入要執行的運算(+,-,*,/):";
  cin >> op;
  switch (op) {
  case '+':
    cout << "num1 + num2 = " << num1 + num2 << endl;
    break;

  case '-':
    cout << "num1 - num2 = " << num1 - num2 << endl;
    break;

  case '*':
    cout << "num1 * num2 = " << num1 * num2 << endl;
    break;

  case '/':
    cout << "num1 / num2 = " << num1 / num2 << endl;
    break;

  default:
    cout << "無法執行運算" << endl;
  }
}
