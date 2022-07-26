#include <iostream>
#include <time.h>
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

int main() {
  srandom(time(NULL));

  Student stu1 = createStudent(1);
  Student stu2 = createStudent(2);

  cout << stu1.name << endl;
  cout << stu1.chinese << endl;

  cout << stu2.name << endl;
  cout << stu2.chinese << endl;
}
