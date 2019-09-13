#include <iostream>
using namespace std;

int main() {
  int studentScore,sum=0;
  for(int i=1;i<=5;i++){
      cout << "請輸入第" << i << "位學生的成績:";
      cin >>  studentScore;
      sum += studentScore;
  }

  cout << "全班總成績為:" << sum << "分，平均為" << (float)sum / 5 << "分\n";
}
