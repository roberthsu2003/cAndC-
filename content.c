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

	Student(){

	}
	
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
	int num = 50;
	Student students[num];

	for(int i=0; i<num; i++){
		string name = "stu" + to_string(i+1);
		string id = "A0" + to_string(i+1);
		students[i] = Student(name,id);
	}

	cout << "學生姓名\t學號\t國文\t英文\t數學" << endl;
	
	for(int i=0; i<num; i++){
		Student s = students[i];
		cout << s.name << "\t\t" << s.id << "\t\t" << s.chinese << "\t\t" << s.english << "\t\t" << s.math << endl;
	}

}
