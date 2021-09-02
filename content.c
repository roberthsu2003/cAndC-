main.cpp

#include <iostream>
#include "student.h"

int main() {
	Student stu1;
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
