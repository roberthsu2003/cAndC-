#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		int chinese;
		int english;
		int math;
		int sum();
		float average();
};
//實作method在class的外部
int Student::sum(){
	return chinese + english + math;
}

float Student::average(){
	return sum() / 3.0;
}

int main() {
	Student stu1;
	stu1.name = "stu1";
	stu1.chinese = 87;
	stu1.english = 92;
	stu1.math = 87;

	cout << "學生總分是:" << stu1.sum() << endl;
	cout << "學生平均是:" << stu1.average() << endl;
	return 0;
} 
