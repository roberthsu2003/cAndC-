#include <iostream>

using namespace std;

typedef struct student {
  string name;
  int scores[5];
} Student;

void creaded_student(Student *s, int id) {
  s->name = "學生" + to_string(id);
  s->scores[0] = 78;
  s->scores[1] = 98;
  s->scores[2] = 84;
  s->scores[3] = 100;
  s->scores[4] = 92;
}

int main() {
  Student s1;
  creaded_student(&s1, 1);
  cout << s1.name << endl;
  cout << s1.scores[0] << endl;
  cout << s1.scores[1] << endl;
  cout << s1.scores[2] << endl;
  cout << s1.scores[3] << endl;
  cout << s1.scores[4] << endl;
}
