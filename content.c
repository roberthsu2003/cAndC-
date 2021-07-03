#include <iostream>
#include "student.h"
#include "time.h"

using namespace std;

int main() {
	srand(time(NULL));
	int num = 50;
	Student students[50];

	for(int i=0; i<num; i++){
		string name = "stu" + to_string(i+1);
		cout << name << endl;
		string id = "A0" + to_string(i+1);
		students[i] = Student(name, id);
	}
	cout << "學生姓名\t學號\t國文\t英文\t數學\t總分\t平均" << endl;
	for(int i=0; i<num; i++){
		Student s = students[i];
		cout << s.name << "\t\t" << s.id << "\t\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t" << s.sum() << "\t\t" << s.average() << endl;
	}

}



student.h


#ifndef __STUDENT__
#define __STUDENT__

#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	string id;
	int chinese;
	int english;
	int math;

	//建構式
	Student(){

	}

	//建構式
	Student(string n,string i){
		name = n;
		id = i;
		chinese = 50 + rand() % 51;
		english = 50 + rand() % 51;
		math = 50 + rand() % 51;
	}

	//method
	int sum(){
		return chinese + english + math;
	}

	float average(){
		return sum() / 3.0;
	}
};
#endif

