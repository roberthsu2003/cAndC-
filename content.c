#include <iostream>
#include <time.h>

using namespace std;

typedef struct student {
  string name;
  int scores[5];
} Student;

void creaded_student(Student *s, int id) {
  int min = 50;
  int max = 100;
  s->name = "學生" + to_string(id);
  for (int i = 0; i < 5; i++) {
    s->scores[i] = random() % (max - min + 1) + min;
  }
}

void print_student(Student *s) {
  cout << s->name << endl;
  cout << s->scores[0] << endl;
  cout << s->scores[1] << endl;
  cout << s->scores[2] << endl;
  cout << s->scores[3] << endl;
  cout << s->scores[4] << endl;
  cout << "======================" << endl;
  cout << endl;
}

int main() {
  srandom(time(NULL));
  int nums = 30;
  Student s[nums];
  for (int i = 0; i < nums; i++) {
    creaded_student(&s[i], i + 1);
    print_student(&s[i]);
  }
}
