#include <iostream>
#include <time.h>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

int main() {
	srandom(time(NULL));
	
	Student stu1;
	stu1.name = "robert";
	stu1.chinese = 50 + random() % 51;
	stu1.math = 50 + random() % 51;
	stu1.english = 50 + random() % 51;


	Student stu2;
	stu2.name = "jenny";
	stu2.chinese = 50 + random() % 51;
	stu2.english = 50 + random() % 51;
	stu2.math = 50 + random() % 51;

	cout << stu1.chinese << endl;
	cout << stu2.chinese << endl;
}
