main.cpp

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
