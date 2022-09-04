//國文100同時數學100,獎金1000
//國文100或者數學100,獎金500
#include <iostream>

using namespace std;

int main() {
  int chinese;
  int math;
  cout << "請輸入國文成績和數學成績(國文,數學):";
  //使用scanf一次輸入2個值
  scanf("%d,%d", &chinese, &math);

  cout << "國文:" << chinese << endl;
  cout << "數學:" << math << endl;
}
