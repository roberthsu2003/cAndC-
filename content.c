#include <iostream>
using namespace std;

//定義一個變生的結構
typedef struct student{
	int id;
	string name;
	int chinese;
	int math;
	int english;
} Student;

int sum(Student stu){
	return stu.chinese + stu.english + stu.math;
}

float average(Student stu){
	return sum(stu) / 3.0;
}

int main() {
	Student stu1 = {99001,"robert",75,86,90};
	Student stu2={99002,"jenny",85,76,97};
	cout << stu1.name << endl;
	cout << "stu1的總分" << sum(stu1) << endl;
	cout << "stu1的平均" << average(stu1) << endl;
	
	cout << stu2.name << endl;
	cout << "stu2的總分" << sum(stu2) << endl;
	cout << "stu2的平均" << average(stu2) << endl;
}
