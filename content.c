#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

typedef struct student {
  string name;
  int chinese;
  int english;
  int math;
} Student;

void created_students(vector<Student> &students) {
  for (int i = 0; i < students.size(); i++) {
    Student *s_info = &students[i];
    s_info->name = "學生" + to_string(i + 1);
    s_info->chinese = random() % (100 - 50 + 1) + 50;
    s_info->english = random() % (100 - 50 + 1) + 50;
    s_info->math = random() % (100 - 50 + 1) + 50;
  }
}

void print_students(const vector<Student> &students) {
  cout << "學生姓名"  << "\t"  << "國文"  << "\t" << "英文"  << "\t"  << "數學" << endl;
  for (Student s : students) {
    cout << s.name << "\t\t";
    cout << s.chinese << "\t\t";
    cout << s.english << "\t\t";
    cout << s.math << "\t";
    cout << endl;
  }
}

int main() {
  srandom(time(NULL));
  vector<Student> students(30);
  created_students(students);
  print_students(students);
}
