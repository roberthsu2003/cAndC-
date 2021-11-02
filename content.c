#include <iostream>
using namespace std;

class Student{
	public:
		Student();
		Student(string n);
		string name;
		int chinese;
		int english;
		int math;
};

Student::Student(){

}

Student::Student(string n){
	int max = 100;
	int min = 60;
	name = n;
	chinese = random() % (max-min+1) + min;
	english = random() % (max-min+1) + min;
	math = random() % (max-min+1) + min;
}


int main() {
	int nums = 50;
	Student stu1 = Student();
	Student students[nums];
	for(int i=0; i<nums; i++){
		students[i] = Student("stu"+to_string(i+1));
		cout << students[i].name << endl;
		cout << students[i].chinese << endl;
	}
	return 0;
} 
