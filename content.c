//國文100同時數學100,獎金1000
//國文100或者數學100,獎金500
#include <iostream>

using namespace std;

int main() {
  int chinese;
  int math;
  int bonus;
  cout << "請輸入國文成績和數學成績(國文 數學):";
  //使用cin一次輸入2個值
  cin >> chinese >> math;

  if (chinese == 100 && math == 100) {
    bonus = 1000;
  } else if (chinese == 100 || math == 100) {
    bonus = 500;
  } else {
    bonus = 0;
  }

  cout << "獎金是:" << bonus << endl;
}
