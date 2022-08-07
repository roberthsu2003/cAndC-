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
  cout << stu.chinese << "\t\t";
  cout << stu.english << "\t\t";
  cout << stu.math << "\t\t";
  cout << stu.sum() << "\t\t";
  printf("%.2f\t", stu.average());
  cout << endl;
}

int main() {
  srandom(time(NULL));
  int nums;
  cout << "請輸入學生人數:";
  cin >> nums;
  Student students[nums];
	cout << "姓名\t" << "國文\t" << "英文\t" << "數學\t" << "總分\t" << "平均" << endl;
  for (int i = 0; i < nums; i++) {
    Student s = students[i];
    s.name = "學生" + to_string(i + 1);
    s.chinese = random() % (100 - 50 + 1) + 50;
    s.english = random() % (100 - 50 + 1) + 50;
    s.math = random() % (100 - 50 + 1) + 50;
    print(s);
  }
}
