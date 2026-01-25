#include <iostream>
#include <time.h>

using namespace std;

int main() {
  srandom(time(NULL));
  int max = 100;
  int min = 50;
  int n; //元素的數量儲存在變數內
  cout << "請輸入每個學生,考試科目的數量:";
  cin >> n;

  int scores[n];
  for (int i = 0; i < n; i++) {
    scores[i] = random() % (max - min + 1) + min;
  }

  for (int i = 0; i < n; i++) {
    cout << scores[i] << endl;
  }
}
