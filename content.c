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
			Student(string,string,int);
			Student(string, string, int, int, int);
			int sum(void);
			float average(void);
	};	
}

#endif

Student.cpp
#include <iostream>
#include "Student.h"
#include <stdlib.h>
#include <time.h>

using namespace Human;
using namespace std;

Student::Student(void){
	name = "name";
	id = "A10001";
	chinese = 0;
	english = 0;
	math = 0;
}

Student::Student(string name,string id,int i){
	this->name = name;
	this->id = id;
	srand(time(NULL) + i);	
	chinese = 50 + rand() % 51;	
	english = 50 + rand() % 51;	
	math = 50 + rand() % 51;
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
	Student students[50];
	for(int i=0; i<50; i++){
		string name = "stu" + to_string(i+1);
		string id = "A000" + to_string(i+1);
		students[i] = Student(name, id, i);
	}

	for(int i=0; i<50; i++){
		Student stu = students[i];
		cout << "學生姓名:" << stu.name << endl;
		cout << "學生學號:" << stu.id << endl;
		cout << "國文:" << stu.chinese << endl;
		cout << "英文:" << stu.english << endl;
		cout << "數學:" << stu.math << endl;
		cout << "學生總分:" << stu.sum() << endl;
		printf("平均%.2f\n", stu.average());
		cout << "===============================\n";
	}
}
