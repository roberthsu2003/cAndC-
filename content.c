#include <iostream>
using namespace std;

//typedef 重新定義資料類型的名稱

typedef struct student{
	int id;
	string name;
	int chinese, english, math;
}Student;

int main() {
	Student stu[]={{99001,"david",78,84,91},{99001,"alex",78,84,91},{99001,"jenny",78,84,91}};

	for(int i=0; i<3; i++){
		cout << "學生id:" << stu[i].id << endl;
		cout << "學生name:" << stu[i].name << endl;
		cout << "學生chinese:" << stu[i].chinese << endl;
		cout << "學生math:" << stu[i].math << endl;
		cout << "學生english:" << stu[i].english << endl;
		cout << "=========================" << endl;
	}

	
}
