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

void sorted(Student *array, int m){
	// 使用泡沫排序法依據總分由高而低排序
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - i - 1; j++) {
			if (array[j].total < array[j + 1].total) {
				Student temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main() {
  int nums;
  cout << "請輸入學生數量:";
  cin >> nums;
  Student students[nums];
  create_student(students, nums);
	sorted(students,nums);  

  for (int i = 0; i < nums; i++) {
    cout << "name:" << students[i].name << endl;
    cout << "總分:" << students[i].total << endl;
    cout << "排名:" << i + 1 << endl;
    cout << "=========" << endl;
  }
}
