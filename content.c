main.cpp

#include <iostream>
#include "student.h"

using namespace std;
int main() {
	int studentCount = 50;
	Student students[studentCount];
	for(int i=0; i< studentCount; i+=1){
		students[i] = createStudent(i);
	}

	for(int i=0; i< studentCount; i+=1){
		Student s = students[i];
		cout << s.name << endl;
		cout << "總分是" << sum(s) << endl;
		printf("平均是%.2f\n", average(s));
		cout << "==============" << endl;
	}
}

student.h

#include <iostream>
#include <time.h>

using namespace std;
bool start = false;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

//傳出亂數分數
int randomScore(int min, int max){
	return rand() % (max - min + 1) + min;
}	

//建立一個學生
Student createStudent(int i){
	if(start == false){
		srand(time(NULL));
		start = true;
	}
	
	Student s;	
	s.name = "stu" + to_string(i+1);
	s.chinese = randomScore(50,100);
	s.english = randomScore(60,100);
	s.math= randomScore(60,100);
	return s;
}

//算出學生總分
int sum(Student s){
	return s.chinese + s.english + s.math;
}

//算出學生平均
float average(Student s){
	return sum(s) / 3.0;
}
