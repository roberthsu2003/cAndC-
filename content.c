#include <iostream>
#include <time.h>
#include "student.h"

using namespace std;



int main() {
	srand(time(NULL));
	int num = 50;
	Student students[num];

	for(int i=0; i<num; i++){
		string name = "stu" + to_string(i+1);
		string id = "A0" + to_string(i+1);
		students[i] = Student(name,id);
	}

	sorted(students,num);

	cout << "學生姓名\t學號\t國文\t英文\t數學\t總分\t平均\t名次" << endl;
	
	for(int i=0; i<num; i++){
		Student s = students[i];
		cout << s.name << "\t\t" << s.id << "\t\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << "\t\t"<< s.sum() << "\t\t" << s.average() << "\t\t" << i+1 <<endl;
	}

}


student.h

#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	string id;
	int chinese;
	int english;
	int math;

	Student(){

	}

	Student(string n, string i){
		name = n;
		id = i;
		chinese = rand() % 41 + 60;
		english = rand() % 41 + 60;
		math = rand() % 41 + 60;	
	}

	int sum(){
		return chinese + english + math;
	}

	float average(){
		return sum() / 3.0;
	}
};

void sorted(Student s[], int nums){
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
