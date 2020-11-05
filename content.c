#include <iostream>
using namespace std;
//自訂一個結構,並且建立一個全新的結構型別Student
typedef struct student{
	int id;
	const char *name;
	int chinese,math,english;
}Student;

typedef int myInt;

int main() {
	//建立結構變數,同時設定成員值
	Student david = {99001, "robert", 75, 86, 90};	

	//取出值
	cout << david.id << endl;
	cout << david.name << endl;
	cout << david.chinese << endl;
	cout << david.math << endl;
	cout << david.english << endl;

	myInt i = 10;
	int j = i;
}
