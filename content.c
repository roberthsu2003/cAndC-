#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

Student createStudent(int num){
	Student s;
	s.name = "stu" + to_string(num+1);
	s.chinese = random() % (100-50+1) + 50;
	s.english = random() % (100-50+1) + 50;
	s.math = random() % (100-50+1) + 50;
	return s;
}

int main() {
	srandom(time(NULL));
	int nums;
	cout << "請輸入學生人數:";
	cin >> nums;
	Student students[nums];
	for (int i=0; i<nums; i++){
		students[i] = createStudent(i);
	}

	cout << students[0].name << endl;
	cout << students[0].chinese << endl;
	cout << students[0].english << endl;
	cout << students[0].math << endl;
	
}
