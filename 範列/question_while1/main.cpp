#include <iostream>
using namespace std;

int main() {
  int total = 0, nums = 0, inputNumber=0;
  while(inputNumber>=0){
      nums++;
      cout << "請輸入第" << nums << "位學生的成績:";
      cin >> inputNumber;
      total += inputNumber;
  }
  cout << "全班總成績為:" << total << "分，平均為" << (float)total/nums << "分";
return 0;
}
