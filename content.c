#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	int chinese;
	int english;
	int math;
	//method
	int sum(){
		return chinese + english + math;
	}

	float average(){
		return sum() / 3.0;
	}
};

int main() {
	Student stu1;
	stu1.name = "徐國堂";
	stu1.chinese = 87;
	stu1.english = 76;
	stu1.math = 68;

	cout << "stu1的name是:" << stu1.name << endl;
	cout << "stu1的總分是:" << stu1.sum() << endl;
	printf("stu1的平均是:%.2f\n", stu1.average());


	Student stu2;
	stu2.name = "張一樂";
	stu2.chinese = 89;
	stu2.english = 65;
	stu2.math = 93;

	cout << "stu2的name是:" << stu2.name << endl;
	cout << "stu\2的總分是:" << stu2.sum() << endl;
	printf("stu2的平均是:%.2f\n", stu2.average());
	
}
