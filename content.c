#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int score;
}Student;

int main() {
	Student stu[3];
	stu[0] = {"robert", 94};
	stu[1] = {"david", 91};
	stu[2] = {"alice", 94};

	for(int i=0; i<3; i+=1){
		Student student = stu[i];
		cout << "學生姓名:" << student.name << endl;
		cout << "學生分數:" << student.score << endl;
		cout << "================" << endl;
	}
}
