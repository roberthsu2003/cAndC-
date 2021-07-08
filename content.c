#include <iostream>
#include "student.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

using namespace std;


int main() {
	Student students[50];
	//建立亂數種子
	srand(time(NULL));
	for(int i=0; i<50; i++){
		students[i] = createStudent(i+1);
	}

	cout << "姓名\t學號\t國文\t英文\t數學\t總分\t平均" << endl;

	for(int i=0; i<50; i++){
		Student s = students[i];
		cout << s.name << "\t" << s.id << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t" << sum(s);
		printf("\t\t%.2f\n",average(s));
	}

	
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

Student createStudent(int num){
	Student s;
	s.name = "stu" + to_string(num);
	s.id = "A0001" + to_string(num);
	s.chinese = rand() % 41 + 60;
	s.english = rand() % 41 + 60;;
	s.math = rand() % 41 + 60;;
	return s;
};

int sum(Student s){
	return s.chinese + s.english + s.math;
}

float average(Student s){
	return sum(s) / 3.0;
}

