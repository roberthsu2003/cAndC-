#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	int chinese;
	int english;
	int math;

	Student(string n, int c, int e, int m){
		name = n;
		chinese = c;
		english = e;
		math = m;
	}

	int sum(){
		return chinese + english + math;
	}

	float average(){
		return sum() / 3.0;
	}
};

int main() {
	//reference 
	Student stu1("stu1", 89, 76, 92);
	cout << stu1.name << endl;
	cout << stu1.chinese << endl;
	cout << stu1.english << endl;
	cout << stu1.math << endl;
	cout << stu1.sum() << endl;
	cout << stu1.average() << endl;




	Student *stu2 = new Student("stu2", 87, 66, 90);
	cout << stu2->name << endl;
	cout << stu2->chinese << endl;
	cout << stu2->english << endl;
	cout << stu2->math << endl;
	cout << stu2->sum() << endl;
	cout << stu2->average() << endl;
}
