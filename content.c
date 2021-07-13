#include <iostream>
#include "student.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define NUM 20  //學生的數量
using namespace std;

int main() {
	
	Student students[NUM];
	//建立亂數種子
	srand(time(NULL));
	for(int i=0; i<NUM; i++){
		students[i] = createStudent(i+1);
	}

	sorted(students,NUM);
	cout << "姓名\t學號\t國文\t英文\t數學\t總分\t平均\t名次" << endl;

	for(int i=0; i<NUM; i++){
		Student s = students[i];
		cout << s.name << "\t" << s.id << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t" << sum(s);
		printf("\t\t%.2f",average(s));
		cout << "\t\t" << i + 1 << endl;
	}

	
}


student.h

#include <iostream>

using namespace std;

typedef struct student{
	string name;
	string id;
	int chinese;
	int english;
	int math;
}Student;

Student createStudent(int num){
	Student s;
	s.name = "stu" + to_string(num);
	s.id = "A0001" + to_string(num);
	s.chinese = rand() % 41 + 60;
	s.english = rand() % 41 + 60;;
	s.math = rand() % 41 + 60;;
	return s;
};

int sum(Student s){
	return s.chinese + s.english + s.math;
}

float average(Student s){
	return sum(s) / 3.0;
}

void sorted(Student s[],int length){
	Student temp;
	for(int i=0; i<length-1; i++){
		for(int j=i+1; j<length; j++){
			if (sum(s[i]) < sum(s[j])){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}
