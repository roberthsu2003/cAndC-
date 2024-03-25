#include <iostream>
#include <time.h>
using namespace std;
typedef struct student {
  string name;
  int chinese;
  int english;
  int math;
  int total;
} Student;

void create_student(Student *array, int m) {
  srandom(time(NULL));
  int min = 50;
  int max = 100;
  for (int i = 0; i < m; i++) {
    array[i].name = "stu" + to_string(i + 1);
    array[i].chinese = random() % (max - min + 1) + min;
    array[i].english = random() % (max - min + 1) + min;
    array[i].math = random() % (max - min + 1) + min;
    array[i].total = array[i].chinese + array[i].english + array[i].math;
  }
}

int main() {
  int nums;
  cout << "請輸入學生數量:";
  cin >> nums;
  Student students[nums];
  create_student(students, nums);

  // 使用泡沫排序法依據總分由高而低排序
  for (int i = 0; i < nums - 1; i++) {
    for (int j = 0; j < nums - i - 1; j++) {
      if (students[j].total < students[j + 1].total) {
        Student temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < nums; i++) {
    cout << "name:" << students[i].name << endl;
    cout << "總分:" << students[i].total << endl;
    cout << "排名:" << i + 1 << endl;
    cout << "=========" << endl;
  }
}
