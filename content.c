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
		string id = "A00000" + to_string(i+1);
		students[i] = Student(name, id);
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
};
#endif
