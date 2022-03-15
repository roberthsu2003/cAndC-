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

int main() {
	Student stu1 = {99001,"robert",75,86,90};
	Student stu2={99002,"jenny",85,76,97};
	cout << stu1.name << endl;
	cout << stu2.name << endl;
}
