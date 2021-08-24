main.cpp

#include <iostream>
#include "student.h"


int main() {
	Student::begin();
	Student stu1("robert");
	cout << stu1.name << endl;
	cout << stu1.chinese << endl;
	cout << stu1.english << endl;
	cout << stu1.math << endl;
	cout << stu1.sum() << endl;
	cout << stu1.average() << endl;

	Student stu2("jenny");
	cout << stu2.name << endl;
	cout << stu2.chinese << endl;
	cout << stu2.english << endl;
	cout << stu2.math << endl;
	cout << stu2.sum() << endl;
	cout << stu2.average() << endl;
	return 0;
}


student.h

#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <time.h>

using namespace std;




class Student{
	public:
		//自訂的建構式(4個參數)
		Student(string n,int c, int e, int m){
			name = n;
			chinese = c;
			english = e;
			math = m;
		}
		//自訂的建構式(1個參數)
		Student(string n){					
			name = n;
			chinese = rand() % 41 + 60;
			english = rand() % 41 + 60;
			math = rand() % 41 + 60;
		}

		//type method
		//使用Student時，必需先執行Student::begin()
		static void begin(){
			srand(time(NULL));
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
