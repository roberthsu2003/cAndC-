#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srandom(time(NULL));
  int student_num, subject_num;
  cout << "請輸入學生人數:";
  cin >> student_num;
  cout << "請輸入科目數:";
  cin >> subject_num;
  int students[student_num][subject_num];
  for (int i = 0; i < student_num; i++) {
    cout << "學生" << i+1 << ":"
         << "\t";
    for (int j = 0; j < subject_num; j++) {
      students[i][j] = random() % (100 - 60 + 1) + 60;
      cout << students[i][j] << "\t";
    }
    cout << endl;
  }
}
