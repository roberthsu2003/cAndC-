#include <iostream>
using namespace std;

struct Student{
	string name;
	string id;
	int chinese;
	int english;
	int math;
};

int main() {
	struct Student stu1;
	stu1.name = "Robert";
	stu1.id = "A78654";
	stu1.chinese = 78;
	stu1.english = 97;
	stu1.math = 95;
}
