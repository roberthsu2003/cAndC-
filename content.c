#include <iostream>
using namespace std;

//typedef 重新定義資料類型的名稱

typedef struct student{
	int id;
	string name;
	int chinese, english, math;
}Student;

int main() {
	Student david = {99001, "David", 75, 86, 90};
	
	cout << "學生id:" << david.id << endl;
	cout << "學生name:" << david.name << endl;
	cout << "學生chinese:" << david.chinese << endl;
	cout << "學生math:" << david.math << endl;
	cout << "學生english:" << david.english << endl;
}
