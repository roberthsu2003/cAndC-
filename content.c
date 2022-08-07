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

void sorted_students(Student students[],int nums){
	for(int i=0; i< nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if(students[i].sum() < students[j].sum()){
				Student temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}
}

void print(Student &stu,int i) {
  cout << stu.name << "\t";
  cout << stu.chinese << "\t\t";
  cout << stu.english << "\t\t";
  cout << stu.math << "\t\t";
  cout << stu.sum() << "\t\t";
  printf("%.2f\t\t", stu.average());
	cout << i << "\t\t";
  cout << endl;
}

int main() {
  srandom(time(NULL));
  int nums;
  cout << "請輸入學生人數:";
  cin >> nums;
  Student students[nums];
  cout << "姓名\t"
       << "國文\t"
       << "英文\t"
       << "數學\t"
       << "總分\t"
       << "平均\t"
       << "名次" << endl;
  for (int i = 0; i < nums; i++) {
    Student& s = students[i];
    s.name = "學生" + to_string(i + 1);
    s.chinese = random() % (100 - 50 + 1) + 50;
    s.english = random() % (100 - 50 + 1) + 50;
    s.math = random() % (100 - 50 + 1) + 50; 
		
  }
	//排序
	sorted_students(students,nums);
	
	for(int i=0; i < nums; i++){
		Student& s = students[i];
		print(s,i+1);
	}
}
