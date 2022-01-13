#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	string id;
	int chinese;
	int english;
	int math;
	
	int sum(){
		return chinese + english + math;
	}

	float average(){
		return sum() / 3.0;
	}
};

int main() {
	Student stu1;
	stu1.name = "stu1";
	stu1.id = "A100001";
	stu1.chinese = 87;
	stu1.english = 97;
	stu1.math = 67;

	cout << stu1.name << endl;
	cout << "總分:" << stu1.sum() << endl;
	cout << "總分:" << stu1.average() << endl;
} 
