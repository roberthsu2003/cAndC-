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
		cout << s.chinese << endl;
		cout << s.english << endl;
		cout << s.math << endl;
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


	


Student createStudent(int i){
	if(start == false){
		srand(time(NULL));
		start = true;
	}
	
	Student s;	
	s.name = "stu" + to_string(i+1);
	s.chinese = rand() % (100 - 50 + 1) + 50;
	s.english = rand() % (100 - 50 + 1) + 50;
	s.math= rand() % (100 - 50 + 1) + 50;
	return s;
}
