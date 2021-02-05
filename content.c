#include <iostream>
#include "tools.h"
using namespace std;


int main() {
	student john = {"張三", 78.0, 95, 84};	
	student alice = {"李四", 81, 83, 85};
	

	cout << john.name << "總分是:" << sum(john) <<",平均是" << average(john) << endl;

	cout << alice.name << "總分是:" << sum(alice) <<",平均是" << average(alice) << endl;
}


tools

#include <iostream>
using namespace std;

typedef struct student{
	string name;
	float chinese;
	float english;
	float math;
} student;

float sum(student s){
	return s.chinese + s.english + s.math;
}

float average(student s){
	float mySum = sum(s);
	return mySum / 3.0;
}
