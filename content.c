#include <iostream>
using namespace std;

class Student{
	public:
		string id;
		string name;
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
	stu1.id = "A1016554";
	stu1.name = "國堂";
	stu1.chinese = 78;
	stu1.english = 98;
	stu1.math = 76;

	cout << "學生姓名:" << stu1.name << endl;
	cout << "學號:" << stu1.id << endl;
	cout << "國文:" << stu1.chinese << endl;
	cout << "英文:" << stu1.english << endl;
	cout << "數學:" << stu1.math << endl;
	cout << "總分:" << stu1.sum() << endl;
	cout << "平均:" << stu1.average() << endl;

	cout << "===================" << endl;

	Student stu2;
	stu2.id = "A1016666";
	stu2.name = "瑞影";
	stu2.chinese = 85;
	stu2.english = 90;
	stu2.math = 66;

	cout << "學生姓名:" << stu2.name << endl;
	cout << "學號:" << stu2.id << endl;
	cout << "國文:" << stu2.chinese << endl;
	cout << "英文:" << stu2.english << endl;
	cout << "數學:" << stu2.math << endl;
	cout << "總分:" << stu2.sum() << endl;
	cout << "平均:" << stu2.average() << endl;
}
