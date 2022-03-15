#include <iostream>
using namespace std;

//定義一個變生的結構
struct student{
	int id;
	string name;
	int chinese;
	int math;
	int english;
};

int main() {
	struct student stu1;
	stu1.id = 99001;
	stu1.name = "robert";
	stu1.chinese = 75;
	stu1.math = 86;
	stu1.english = 90;

	struct student stu2;
	stu2.id = 99002;
	stu2.name = "jenny";
	stu2.chinese = 85;
	stu2.math = 76;
	stu2.english = 97;

	cout << stu1.name << endl;
	cout << stu2.name << endl;
}
