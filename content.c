#include <iostream>
#include "student.h"
#include "stdio.h"

using namespace std;
int main() {
	Student stu1 = {"robert","A10003",78, 90,85};
	cout << "name=" << stu1.name << endl;
	cout << "id=" << stu1.id << endl;
	cout << "國文=" << stu1.chinese << endl;
	cout << "英文=" << stu1.english << endl;
	cout << "數學=" << stu1.math << endl;
	cout << "總分=" << stu1.chinese + stu1.english + stu1.math << endl;
	printf("平均=%.2f\n", (stu1.chinese + stu1.english + stu1.math)/3.0);
	
}


