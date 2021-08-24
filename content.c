main.cpp

#include <iostream>
#include "student.h"

int main() {
	Student stu1("robert",78, 98, 65);
	cout << stu1.name << endl;
	cout << stu1.chinese << endl;
	cout << stu1.english << endl;
	cout << stu1.math << endl;
	return 0;
}


student.h

#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
using namespace std;

class Student{
	public:
		Student(string n,int c, int e, int m){
			name = n;
			chinese = c;
			english = e;
			math = m;
		}
		string name;
		int chinese;
		int english;
		int math;

		int sum(){
			return chinese + english + math;
		}

		float average(){
			return sum() / 3.0;
		}
};
#endif
