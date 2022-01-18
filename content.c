#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		string id;
		int chinese;
		int english;
		int math;
		Student(string n,string id,int c, int e, int m);
		int sum();
		float average();
};

Student::Student(string n,string id,int c, int e, int m){
			name = n;
			this -> id = id;
			chinese = c;
			english = e;
			math = m;
		}

int Student::sum(){
	return chinese + english + math;
}

float Student::average(){
	return sum() / 3.0;
}

int main() {
	Student stu1("robert","A10001",78,93,78);
	cout << "學生總分為:" << stu1.sum() << endl;
	cout << "學生平均為:" << stu1.average() << endl;
} 
