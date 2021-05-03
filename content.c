#include <iostream>
#include "tools.h"
#include <time.h>

using namespace std;

int main() {
	srandom(time(NULL));
	Student students[50];
	for(int i=0; i<50; i++){
		students[i] = createStudent(i+1);
	}

	cout << "姓名\t國文\t英文\t數學" << endl;
	for (int i=0; i<50; i++){
		Student s = students[i];
		cout << s.name << "\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << endl;
	}
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
