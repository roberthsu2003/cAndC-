#include <iostream>
//讓使用者輸入成績, 若成績在90分以上就顯示「優等」, 80-89分顯示「甲等」，70-79分顯示「乙等」，60-69分顯示「丙等」，60分以下顯示「丁等」。
using namespace std;

int main() {
  int score;
  cout << "請輸入成績:";
  cin >> score;
  if(score >=90){
    cout << "優等" << endl; 
  }else if(score >=80){
    cout << "甲等" << endl; 
  }else if(score >=70){
    cout << "乙等" << endl;
  }else if(score >=60){
    cout << "丙等" << endl;
  }else{
    cout << "丁等" << endl;
  }
  return 0;
}
