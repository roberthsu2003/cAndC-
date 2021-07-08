#include <iostream>
#include "student.h"
#include "stdio.h"

using namespace std;

Student createStudent(int num){
	Student s;
	s.name = "robert";
	s.id = "A0001" + to_string(num);
	s.chinese = 89;
	s.english = 75;
	s.math = 95;
	return s;
};

int main() {
	Student students[50];
	for(int i=0; i<50; i++){
		students[i] = createStudent(i);
	}

	cout << students[1].name << endl;
	cout << students[1].id << endl;
	cout << students[1].chinese << endl;
	cout << students[1].english << endl;
	cout << students[1].math << endl;	
}



student.h

#include <iostream>

using namespace std;

typedef struct student{
	string name;
	string id;
	int chinese;
	int english;
	int math;
}Student;

