#include <iostream>
using namespace std;

//定義一個結構
typedef struct student{
	int id;
	string name;
	int chinese, math, english;
}Student;


int main() {
	//建立一個結構變數
	Student david = {99001, "David", 75, 87, 98};
	

	cout << "學生id" << david.id << endl;
	cout << "學生姓名" << david.name << endl;
	cout << "國文" << david.chinese << endl;
	cout << "英文" << david.english << endl;
	cout << "數學" << david.math << endl;

	cout << "=======================" << endl;
	Student robert = {99002, "Robert", 76, 92, 93};	

	cout << "學生id" << robert.id << endl;
	cout << "學生姓名" << robert.name << endl;
	cout << "國文" << robert.chinese << endl;
	cout << "英文" << robert.english << endl;
	cout << "數學" << robert.math << endl;
	return 0;
}
