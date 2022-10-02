#include <iostream>
//全域變數,區塊變數,區域變數
using namespace std;
int n; // 全域變數

void showNum() {
  int value = n; //區域變數
  cout << "=======================\n";
  for (int n = value; n >= 1; n--) {
    // n是區塊變數
    cout << "區塊變數 n=" << n << endl;
  }
  cout << "=================" << endl;
  cout << "結束for迴圈後 全域變數n=" << n << endl;
}

int main() {
  cout << "請輸入全域變數 n=";
  cin >> n;
  showNum();
  return 0;
}
