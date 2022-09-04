//小美是一位教師，請你以while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績。
#include <iostream>
using namespace std;
int main() {
  int score = 0;
  int sum = 0;

  do {
    cout << "請輸入學生成績:";
    sum += score;
    cin >> score;
  } while (score >= 0);

  cout << "學生總成績是:" << sum << endl;
}
