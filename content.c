// while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績
#include <iostream>
using namespace std;

int main() {
  int num = 0;
  int score;
  int sum = 0;
  while (true) {    
    cout << "請輸入第" << num+1 << "學生的成績:";
    cin >> score;
    if (score < 0) {
      break;
    }
    sum += score;
		num += 1;
  }

  cout << "全班總成績為:" << sum << "平均分數為:" << (float)sum/num << endl; 
}
