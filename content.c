#ifndef __TOOLS__
#define __TOOLS__

#include <iostream>
using namespace std;

#define RATE 32.75

typedef enum direction{
	North,
	East,
	West,
	South
} direction;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
} Student;

//定義function的原型
Student createStudent(int);
int sum(Student);
float average(Student);



#endif






================================



#include "tools.h"

Student createStudent(int num){
	Student s;
	s.name = "學生" + to_string(num);
	s.chinese = 50 + random() % 51;
	s.english = 50 + random() % 51;
	s.math = 50 + random() % 51;
	return s;
}

int sum(Student s){
	return s.chinese + s.english + s.math;
}

float average(Student s){
	int mySum = sum(s);
	return mySum / 3.0;
}
