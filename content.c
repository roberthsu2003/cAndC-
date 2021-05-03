#include <iostream>
#include "tools.h"
#include <time.h>

using namespace std;

int main() {
	srandom(time(NULL));
	Student s = createStudent(25);
	cout << "學生姓名:" << s.name << endl;
	cout << "國文:" << s.chinese << endl;
	cout << "英文:" << s.english << endl;
	cout << "數學:" << s.math << endl;
	return 0;
}












#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int chinese;
	int english;
	int math;
} Student;

Student createStudent(int num){
	Student s;
	s.name = "學生" + to_string(num);
	s.chinese = 50 + random() % 51;
	s.english = 50 + random() % 51;
	s.math = 50 + random() % 51;
	return s;
}
