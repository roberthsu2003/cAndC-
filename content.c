#include <iostream>
#include "Student.h"
using namespace std;


int main() {
	int num = 50;
	Student students[50];
}


Student.h
#ifndef __STUDENT__
#define __STUDENT__

#include <iostream>
using namespace std;

class Student{
	public:
		string id;
		string name;
		int chinese;
		int english;
		int math;

		Student()

		Student(string i, string n, int chin, int eng, int ma);

		Student(int i);
		
		int sum();

		float average();

		void description();
};

#endif

Student.cpp
#include "Student.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

Student::Student(){
	id = "";
	name = "";
	chinese = 0;
	english = 0;
	math = 0;
}

Student::Student(string i, string n, int chin, int eng, int ma){
			id = i;
			name = n;
			chinese = chin;
			english = eng;
			math = ma;
}

Student::Student(int i){
	srand(time(NULL) + i);
	id = "A100000" + to_string(i);
	name = "student" + to_string(i);
	chinese = random() %  51 + 50;
	english = random() %  51 + 50;
	math = random() %  51 + 50;
}

int Student::sum(){
		return chinese + english + math;
}

float Student::average(){
	return sum() / 3.0;
}

void Student::description(){
	cout << "學生姓名:" << name << endl;
	cout << "學號:" << id << endl;
	cout << "國文:" << chinese << endl;
	cout << "英文:" << english << endl;
	cout << "數學:" << math << endl;
	cout << "總分:" << sum() << endl;
	printf("平均:%.2f\n",average());
	cout << "===================" << endl;
}
