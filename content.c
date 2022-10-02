#include <iostream>
#include <time.h>
using namespace std;

typedef struct student {
  string name;
  int chinese;
  int english;
  int math;
} Student;

Student createStudent(int num) {
  Student s;
  s.name = "學生" + to_string(num);
  s.chinese = random() % (100 - 50 + 1) + 50;
  s.english = random() % (100 - 50 + 1) + 50;
  s.math = random() % (100 - 50 + 1) + 50;
  return s;
}

int main() {
  srandom(time(NULL));
  Student students[50];
  //建立50位學生
  for (int i = 0; i < 50; i++) {
    students[i] = createStudent(i + 1);
  }

  //輸出學生資料
  for (int i = 0; i < 50; i++) {
    Student s = students[i];
    cout << s.name << "\t";
    cout << s.chinese << "\t";
    cout << s.english << "\t";
    cout << s.math << endl;
  }
}
