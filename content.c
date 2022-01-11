//確保檔案不會被重覆include
#ifndef __DATA_H__
#define __DATA_H__

#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

int createScore(int min, int max){
	return random() % (max-min+1) + min;
}

int sum(Student s){
	return s.chinese + s.english + s.math;
}

float average(Student s){
	return sum(s) / 3.0;
}

#endif
