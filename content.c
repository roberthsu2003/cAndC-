#include <iostream>
using namespace std;
typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

int main() {
	Student stu1;
	stu1.name = "robert";
	stu1.chinese = 78;
	stu1.math = 76;
	stu1.english = 82;


	Student stu2;
	stu2.name = "jenny";
	stu2.chinese = 98;
	stu2.english = 80;
	stu2.math = 85;
}
