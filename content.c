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
