#include <iostream>
using namespace std;
class Student{
	public:
	//實體欄位
	string name;
	string id;
	int chinese;
	int english;
	int math;
};

int main() {
	Student stu1;
	stu1.name = "stu1";
	stu1.id = "A10001";
	stu1.chinese = 87;
	stu1.english = 96;
	stu1.math = 76;
}
