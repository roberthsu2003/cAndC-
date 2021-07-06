#include <iostream>
#include "data.h"

using namespace std;



int main() {
	Stu stu1;
	stu1.name = "Robert";
	stu1.id = "A78654";
	stu1.chinese = 78;
	stu1.english = 97;
	stu1.math = 95;
	cout << "name=" << stu1.name << endl;
	cout << "id=" << stu1.id << endl;
	cout << "chinese=" << stu1.chinese << endl;
	cout << "english=" << stu1.english << endl;
	cout << "math=" << stu1.math << endl;
}


data.h
#include <iostream>
using namespace std;

typedef struct Student{
	string name;
	string id;
	int chinese;
	int english;
	int math;
}Stu;
