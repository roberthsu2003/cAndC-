main.cpp

#include <iostream>
#include "student.h"
using namespace std;
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

