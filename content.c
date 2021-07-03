#include <iostream>
#include "student.h"

using namespace std;

int main() {
	Student stu1("stu1","A10012");
	cout << stu1.name << endl;
	cout << stu1.id << endl;
	cout << stu1.chinese << endl;
	cout << stu1.english << endl;
	cout << stu1.math << endl;
}

student.h

#ifndef __STUDENT__
#define __STUDENT__

#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	string id;
	int chinese;
	int english;
	int math;

	//建構式
	Student(string n,string i){
		name = n;
		id = i;
		chinese = 50 + rand() % 51;
		english = 50 + rand() % 51;
		math = 50 + rand() % 51;
	}
};
#endif
