#include <iostream>
using namespace std;

int main() {
  const int nums = 5; //定義一個常數nums,儲存5
  int scores[nums];//建立5個儲存學生分數的陣列空間
  int sum=0; //建立總分的變 數
  double ave;

  for(int i=0; i<nums;i++){ // 使用for迴轉,一個一個取出陣列元素
    cout << "請輸入第" << i+1 << "位學生的成績";
    cin >> scores[i];
  }

  for(int i=0; i< nums; i++){
      sum += scores[i];
  }

  ave = (double)sum / nums;

  cout << "全班總成績為:" << sum << "分,平均為" << ave << "分\n";
  return 0;

}
