#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int math;
	int english;
}Student;

int main() {
	Student stu1;
	stu1.name = "Robert";
	stu1.chinese = 78;
	stu1.english = 85;
	stu1.math = 76;

	cout << stu1.name << endl;
	cout << stu1.chinese << endl;
	cout << stu1.english << endl;
	cout << stu1.math << endl;
}
