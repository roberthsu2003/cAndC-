#include <iostream>
using namespace std;

// recursive遞迴
double factorial(double n) {
  if (n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
int main() {
  double b, total;
  cout << "請輸入數字 n:";
  cin >> b;
  total = factorial(b);
  printf("%.0f!是%20.4f\n", b, total);
}
