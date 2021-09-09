main.cpp

#include <iostream>
#include "student.h"
using namespace std;

int main() {
	Student stu1("stu1", "A10001", 87, 96, 76);
	cout << "學生姓名:" << stu1.name << endl;
	cout << "學號:" << stu1.id << endl;
	cout << "國文:" << stu1.chinese << endl;
	cout << "英文:" << stu1.english << endl;
	cout << "數學:" << stu1.math << endl;
	cout << "總分:" << stu1.sum() << endl;
	printf("平均:%.2f\n",stu1.average());
	return 0;
}

student.h

#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
using namespace std;

class Student{
	public:
	//建構式
	Student(string,string,int,int,int);
	//實體欄位
	string name;
	string id;
	int chinese;
	int english;
	int math;
	//實體方法
	int sum();
	float average();
};


#endif

student.cpp

#include "student.h"

Student::Student(string n,string d,int c,int e,int m){
	name = n;
	id = d;
	chinese = c;
	english = e;
	math = m;
}

int Student::sum(){
	return chinese + english + math;
}
float Student::average(){
	return sum()/3.0;
}
