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

int sum(Student s) { 
	return s.chinese + s.english + s.math; 
}

float average(Student s){
	return 0.0;
}

int main() {
  srandom(time(NULL));
  Student students[50];
  //建立50位學生
  for (int i = 0; i < 50; i++) {
    students[i] = createStudent(i + 1);
  }

  //輸出學生資料
  cout << "姓名\t國文\t英文\t數學\t總分\t平均\n";
  for (int i = 0; i < 50; i++) {
    Student s = students[i];
    cout << s.name << "\t";
    cout << s.chinese << "\t\t";
    cout << s.english << "\t\t";
    cout << s.math << "\t\t";
    cout << sum(s) << "\t\t";
		cout << average(s) << endl;
  }
}
