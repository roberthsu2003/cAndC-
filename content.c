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
	Student stu1;
	stu1.name = "徐國堂";
	stu1.chinese = 87;
	stu1.english = 76;
	stu1.math = 68;

	cout << "stu1的name是:" << stu1.name << endl;


	Student stu2;
	stu2.name = "張一樂";
	stu2.chinese = 89;
	stu2.english = 65;
	stu2.math = 93;

	cout << "stu2的name是:" << stu2.name << endl;
	
}
