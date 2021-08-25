main.cpp

#include <iostream>
#include "student.h"
using namespace std;

void sortedStudents(Student *s,int nums){
	Student temp;
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			if (s[i].sum() < s[j].sum()){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

}

int main() {
	int nums;
	Student::begin();
	cout << "請輸入學生人數:";
	cin >> nums;
	Student students[nums];
	for(int i=0; i<nums; i+=1){
		students[i] = Student("stu"+to_string(i+1));		
	}

	//依總分排序
	sortedStudents(students,nums);

	cout << "學生姓名\t國文\t數學\t英文\t總分\t平均\t名次" << endl; 

	for(int i=0; i<nums; i+=1){
		Student s = students[i];
		cout << s.name << "\t\t" << s.chinese << "\t\t" << s.math << "\t\t" << s.english << "\t\t" << s.sum() << "\t\t" << s.average() << "\t\t" << i+1 << endl;
	}
	return 0;
}

student.h

#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <time.h>

using namespace std;


class Student{
	public:
		//自訂的建構式(4個參數)
		Student(string n,int c, int e, int m);
		//自訂的建構式(1個參數)
		Student(string n);
		//自訂的建構式()
		Student();

		//type method
		//使用Student時，必需先執行Student::begin()
		static void begin(){
			srand(time(NULL));
		}
		
		string name;
		int chinese;
		int english;
		int math;
		int sum();
		float average();
};
#endif

People.cpp

#include "student.h"
#include <iostream>
using namespace std;

Student::Student(string n,int c, int e, int m){
	name = n;
	chinese = c;
	english = e;
	math = m;
}
//自訂的建構式(1個參數)
Student::Student(string n){					
	name = n;
	chinese = rand() % 41 + 60;
	english = rand() % 41 + 60;
	math = rand() % 41 + 60;
}
//自訂的建構式()
Student::Student(){
	
}

int Student::sum(){
	return chinese + english + math;
}

float Student::average(){
	return sum() / 3.0;
}

