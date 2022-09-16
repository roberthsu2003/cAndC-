#include <iostream>
using namespace std;
//讓使用者輸入成績, 若成績在90分以上就顯示「優等」,
// 80-89分顯示「甲等」，70-79分顯示「乙等」，60-69分顯示「丙等」，60分以下顯示「丁等」。

int main() {
  int scores;
  cout << "請輸入學生分數:";
  cin >> scores;
  if (scores >= 90) {
    cout << "優等" << endl;
  } else if (scores >= 80) {
    cout << "甲等" << endl;
  } else if (scores >= 70) {
    cout << "乙等" << endl;
  } else if (scores >= 60) {
    cout << "丙等" << endl;
  } else {
    cout << "丁等" << endl;
  }
}
