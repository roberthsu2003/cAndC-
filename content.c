#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		int chinese;
		int english;
		int math;
};

int main() {
	Student stu1 = Student();
	stu1.name = "robert";
	stu1.chinese = 84;
	stu1.english = 92;
	stu1.math = 74;

	cout <<stu1.name << "的總分" << stu1.chinese+stu1.english+stu1.math << endl;
	return 0;
} 
