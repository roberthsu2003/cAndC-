#include <iostream>
#include "student.h"
using namespace std;

int main() {
	Student::begin();
	Student stu1("robert");
	cout << stu1.name << ",總分為" << stu1.sum() << ",平均為" << stu1.average() << endl;
	return 0;
}
