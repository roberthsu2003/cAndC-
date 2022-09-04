//小美是一位教師，請你以while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績。
#include <iostream>
using namespace std;
int main() {
  int score = 0;
  float sum = 0;
  int num = 0;
  while (true) {
    cout << "請輸入第" << num + 1 << "學生成績:";
    cin >> score;
    if (score < 0) {
      break;
    }
    sum += score;
    num += 1;
  };

  cout << "學生總成績是:" << sum << endl;
  cout << "學生的平均成績是:" << sum / num << endl;
}
