main.cpp

#include "tools.h"
#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srandom(time(NULL));
  int student_nums;
  cout << "請輸入學生數:";
  cin >> student_nums;
  Student students[student_nums];
  for (int i = 0; i < student_nums; i++) {
    students[i] = createStudent(i + 1);
    cout << students[i].name << "\t";
    cout << students[i].chinese << "\t";
    cout << students[i].english << "\t";
    cout << students[i].math << "\t";
    cout << sum(&students[i]) << "\t";
    cout << average(&students[i]) << endl;
  }
}


tools.h
#include <iostream>
using namespace std;

typedef struct student {
  string name;
  int chinese;
  int english;
  int math;
} Student;

Student createStudent(int student_id) {
  Student s;
  s.name = "學生" + to_string(student_id);
  s.chinese = 50 + random() % 51;
  s.math = 50 + random() % 51;
  s.english = 50 + random() % 51;
  return s;
}

int sum(Student *s) { return s->chinese + s->english + s->math; }

double average(Student *s) { return (s->chinese + s->english + s->math) / 3.0; }
