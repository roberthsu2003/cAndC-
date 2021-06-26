main.cpp

#include <iostream>
#include "data.h"
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
	Student std = createStudent(1);
	cout << "姓名:" << std.name << endl;
	cout << "國文:" << std.chinese << endl;
	cout << "數學:" << std.math << endl;
	cout << "英文:" << std.english << endl;
}



data.h

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
}Student;

Student createStudent(int num){
	Student s;
	s.name = "學生" + to_string(num);
	s.chinese = 50 + (rand() % 51);
	s.english = 50 + (rand() % 51);
	s.math = 50 + (rand() % 51);
	return s;
}



