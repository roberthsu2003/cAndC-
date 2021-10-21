data.h

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
	s.name = "學生" + to_string(num);
	s.chinese = 70;
	s.english = 80;
	s.math = 90;
	return s;
}


main.cpp

#include <iostream>
#include "data.h"

int main() {
	Student stu1 = createStudent(1);
	cout << stu1.name << endl;
	cout << stu1.chinese << endl;
	return 0;
}
