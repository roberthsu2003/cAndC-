//讓使用者輸入被除數(整數)及除數(整數，不可以是零)，程式會顯示兩數相除的商及餘數。
#include <iostream>

using namespace std;
int main() {
  int n = 0, m = 0;
  cout << "請輸入被除數(整數):";
  cin >> n;
  cout << "請輸入除數(整數,不可以為0):";
  cin >> m;

  cout << "商" << n / m << "餘數是:" << n % m << endl;
}
