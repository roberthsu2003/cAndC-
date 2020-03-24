#include <iostream>
using namespace std;

typedef struct Student{
	string name;
	int score;
}Student;

int main() {
	Student stus[3] = {{"robert", 94},{"david", 91},{"alice",94}}; 
	for(int i=0; i<3; i++){
		Student student = stus[i];
		cout << "第" << i+1 << "位學生是" << student.name << "分數是" << student.score << endl;
	}
}
