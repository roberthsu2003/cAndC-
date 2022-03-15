main.cpp

#include <iostream>
#include "student.h"
using namespace std;



int main() {
	srandom(time(NULL));
	int nums;
	cout << "請輸入學生人數:";
	cin >> nums;
	Student students[nums];
	for (int i=0; i<nums; i++){
		students[i] = createStudent(i);
	}
	sortStudent(students,nums);
	cout << "姓名\t國文\t英文\t數學\t總分\t平均\t名次" << endl;
	for(int i=0; i<nums; i++){
		Student s = students[i];
		cout << s.name << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t" << sum(s) << "\t\t" ;
		printf("%.2f\t",average(s));
		cout << i+1 << endl;
	}
	
}


student.h

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

int sum(Student s){
	return s.chinese + s.english + s.math;
}

float average(Student s){
	return sum(s) / 3.0;
}

void sortStudent(Student* stus,int nums){
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (sum(stus[i]) < sum(stus[j])){
				Student temp = stus[i];
				stus[i] = stus[j];
				stus[j] = temp;
			}
		}
	}
}
