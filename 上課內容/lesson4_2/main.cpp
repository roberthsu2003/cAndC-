#include <iostream>
using namespace std;
int main() {
  int score;
  cout << "請輸入學生總分:";
  cin >> score;
  if (score >= 60) {
    cout << "及格" << endl;
  } else {
    cout << "不及格" << endl;
  }
}
