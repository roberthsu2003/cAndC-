#include <iostream>
#include "tools.h"
using namespace std;


int main() {
	int studentCount = 10;
	student students[studentCount];
	for(int i=0; i<studentCount; i++){
		students[i] = createStudent();
	}
	cout << "姓名\t國文\t英文\t數學\t總分\t平均" << endl;

	for(int i=0;i<studentCount;i++){
		student s = students[i];
		cout << s.name << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t" << sum(s) << "\t\t" << average(s) << endl;
	}
}


tools.h

#include <iostream>
using namespace std;

typedef struct student{
	string name;
	float chinese;
	float english;
	float math;
} student;

student createStudent(){
	student s;
	s.name = "張三";
	s.chinese = 98;
	s.english = 74;
	s.math = 58;
	return s;
}

float sum(student s){
	return s.chinese + s.english + s.math;
}

float average(student s){
	float mySum = sum(s);
	return mySum / 3.0;
}
