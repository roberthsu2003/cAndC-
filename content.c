#include <iostream>
using namespace std;
int main() {
  //使用c++ 的輸入和輸出
  int chinese;
  int english;
  int math;
  int sum;

  cout << "請輸入國文成績:"; //提示使用者輸入  
  cin >> chinese;

  cout << "請輸入英文成績:"; //提示使用者輸入  
  cin >> english;

  cout << "請輸入數學成績:"; //提示使用者輸入  
  cin >> math;

  sum = chinese + english + math;

  
  cout << "國文成績是" << chinese << endl;  
  cout << "英文成績是" << english << endl;  
  cout << "數學成績是" << math << endl;
  cout << "====================\n";
  
  cout << "總分是" << sum << endl;
  return 0;
}
