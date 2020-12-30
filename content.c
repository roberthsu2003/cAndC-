Student.h

#ifndef __STUDENT__
#define __STUDENT__

#include <iostream>
using namespace std;

namespace Human{
	class Student{
		public:
			string name;
			string id;
			int chinese;
			int english;
			int math;
			Student(void);
			Student(string,string);
			Student(string, string, int, int, int);
			int sum(void);
			float average(void);
	};	
}

#endif

Student.cpp
#include <iostream>
#include "Student.h"
using namespace Human;
using namespace std;

Student::Student(void){
	name = "name";
	id = "A10001";
	chinese = 0;
	english = 0;
	math = 0;
}

Student::Student(string name,string id){
	this->name = name;
	this->id = id;
	chinese = 50;
	english = 50;
	math = 50;
}

Student::Student(string name, string id, int chinese, int english, int math){
	this->name = name;
	this->id = id;
	this->chinese = chinese;
	this->english = english;
	this->math = math;
}

int Student::sum(){
		return chinese + english + math;
}

float Student::average(){
		return sum() / 3.0;
}




main.cpp

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Student.h"
using namespace std;
using namespace Human;

int main() {
	Student stu1("stu1", "A10001");	

	cout << "學生姓名:" << stu1.name << endl;
	cout << "學號:" << stu1.id << endl;
	cout << "國文:" << stu1.chinese << endl;
	cout << "英文:" << stu1.english << endl;
	cout << "數學:" << stu1.math << endl;
	cout << "總分:" << stu1.sum() << endl;
	printf("平均:%.2f\n",stu1.average());

}
