#include <iostream>
#include <time.h>

using namespace std;

class Student{
	public:
	string name;
	string id;
	int chinese;
	int english;
	int math;

	Student(string n, string i){
		name = n;
		id = i;
		chinese = rand() % 41 + 60;
		english = rand() % 41 + 60;
		math = rand() % 41 + 60;	
	}
};

int main() {
	srand(time(NULL));
	Student stu1("robert", "A10034");
	cout << stu1.name << endl;
	cout << stu1.id << endl;
	cout << stu1.chinese << endl;
	cout << stu1.english << endl;
	cout << stu1.math << endl;
}
