data.h
//要使用這個h檔,必需要先執行begin()
#include <iostream>


using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

/*
//要使用這個h檔,必需要先執行begin()
*/
void begin();

//建立一個學生
Student createStudent(int num);

//算出總分
int sum(Student s);

//算出平均
float average(Student s);


data.cpp

#include "data.h"
#include "time.h"

void begin(){
	srand(time(NULL));
}

Student createStudent(int num){
	Student s;
	s.name = "學生" + to_string(num);
	s.chinese = rand() % (100-50+1) + 50;
	s.english = rand() % (100-50+1) + 50;
	s.math = rand() % (100-50+1) + 50;
	return s;
}

int sum(Student s){
	return s.chinese + s.english + s.math;
}

float average(Student s){
	return sum(s) / 3.0;
}






main.cpp

#include <iostream>
#include "data.h"

int main() {
	begin();
	int studentCount = 100;
	Student students[studentCount];
	for(int i=0; i<studentCount; i++){
		students[i] = createStudent(i+1);
	}
	for(int i=0;i<studentCount;i++){
		Student oneStudent = students[i];
		cout << oneStudent.name << endl;
		cout << "總分是:" << sum(oneStudent) << endl;
		cout << "平均是:" << average(oneStudent) << endl;
		cout << "==================" << endl;
	}
	return 0;
}
