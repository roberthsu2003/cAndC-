#include <iostream>
#include <time.h>

using namespace std;

class Student {
public:
  string name;
  int chinese;
  int english;
  int math;

  int sum() { return chinese + english + math; }

  double average() { return sum() / 3.0; }
};

void print(Student &stu) {
  cout << stu.name << "\t";
  cout << stu.chinese << "\t";
  cout << stu.english << "\t";
  cout << stu.math << "\t";
  cout << stu.sum() << "\t";
  printf("%.2f\t", stu.average());
  cout << endl;
}

int main() {
  srandom(time(NULL));
  int nums;
  cout << "請輸入學生人數:";
  cin >> nums;
  Student students[nums];

  for (int i = 0; i < nums; i++) {
    Student s = students[i];
    s.name = "學生" + to_string(i + 1);
    s.chinese = random() % (100 - 50 + 1) + 50;
    s.english = random() % (100 - 50 + 1) + 50;
    s.math = random() % (100 - 50 + 1) + 50;
    print(s);
  }
}
