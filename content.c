#include <iostream>
using namespace std;

typedef struct student{
	string name;
	int score;
}Student;

int main() {
	Student stu[3] = {{"robert", 94},{"david", 91},{"alice", 94}};
	

	for(int i=0; i<3; i+=1){
		Student student = stu[i];
		cout << "學生姓名:" << student.name << endl;
		cout << "學生分數:" << student.score << endl;
		cout << "================" << endl;
	}
}
