/*
outlay_s.cpp
小張要了解三天出遊花費的總支出和平均，設計程式讓小張輸入三天的支出後，自動計算其支出總額及平均

------
請輸入第一天的支出: 321
請輸入第二天的支出: 123
請輸入第三天的支出: 567
您的總支出為 xxxx 元，平均每天支出 xxx.xxx 元
*/


#include <iostream>
using namespace std;

int main() {
  unsigned int firstDay = 0, secondDay = 0, thirdDay = 0;
  cout << "請輸入第1天的支出:";
  cin >> firstDay;

  cout << "請輸入第2天的支出:";
  cin >> secondDay;

  cout << "請輸入第3天的支出:";
  cin >> thirdDay;

  int sum = firstDay + secondDay + thirdDay;
  float average = sum / 3.0;
  cout << "您的總支出為" << sum << "元，平均每天支出" << average << "元";
}
