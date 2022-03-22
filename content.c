#include <iostream>
#include "student.h"
using namespace std;

void printStudent(Student s){
	cout << s.name << endl;
	cout << s.chinese << endl;
	cout << s.english << endl;
	cout << s.math << endl;
	cout << s.sum() << endl;
	cout << s.average() << endl;
}

int main() {
	Student stu1("stu1",87, 97, 78);
	printStudent(stu1);
}
