main.cpp

#include <iostream>
#include "data.h"
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
	int studentCount = 20;
	Student students[studentCount];
	
	for(int i=0;i<studentCount;i++){
		students[i] = createStudent(i+1);
	}

	cout << "姓名\t國文\t英文\t數學\t總分\t平均" << endl;

	for(int i=0; i<studentCount; i++){
		Student s = students[i];
		cout << s.name << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t" << sum(s) << "\t\t";
		
		printf("%.2f\n", average(s));
	}
	
}


data.h

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

//建立一個學生
Student createStudent(int);

//計算學生總分
int sum(Student);

//計算學生平均
float average(Student);


